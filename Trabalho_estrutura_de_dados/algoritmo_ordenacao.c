#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "manipular_vetor.h"

// Algoritmo de ordenação
void bubbleSort(int lista_numeros[], int tamanho_vetor)
{
    int i, aux, contador, operacao = 0;

    // MostrarVetor(lista_numeros[], tamanho_vetor);

    for (contador = 1; contador <= tamanho_vetor; contador++)
    {
        for (i = 0; i < tamanho_vetor; i++)
        {
            if (lista_numeros[i] > lista_numeros[i + 1])
            {
                aux = lista_numeros[i];
                lista_numeros[i] = lista_numeros[i + 1];
                lista_numeros[i + 1] = aux;
                operacao++;
            }
        }
    }

    printf("Total de operações realizadas: %d", operacao);
}

void insert(int lista_numeros[], int tamanho_vetor)
{
    int i, aux, j = 1, operacao = 0;

    while (j < tamanho_vetor)
    {
        aux = lista_numeros[j];
        i = j - 1;

        while ((i >= 0) && (lista_numeros[i] > aux))
        {
            lista_numeros[i + 1] = lista_numeros[i];
            i = i - 1;
            operacao++;
        }
        lista_numeros[i + 1] = aux;
        j = j + 1;
    }

    printf("Total de operações realizadas: %d", operacao);
}

void selection(int lista_numeros[], int tamanho_vetor)
{
    int i, j, aux, min, operacao = 0;

    for (i = 0; i <= (tamanho_vetor - 1); i++)
    {
        min = i;
        for (j = i + 1; j < tamanho_vetor; j++)
        {
            if (lista_numeros[j] < lista_numeros[min])
            {
                min = j;
            }
            operacao++;
            aux = lista_numeros[i];
            lista_numeros[i] = lista_numeros[min];
            lista_numeros[min] = aux;
        }
    }
    printf("Total de operações realizadas: %d", operacao);
}

void mergeSort(int *lista_numeros[], int tamanho_vetor)
{
    int *p = malloc(sizeof(int) * tamanho_vetor), operacao = 0;
    operacao = operacao + sort(lista_numeros, p, 0, tamanho_vetor - 1);
    printf("Total de operações realizadas: %d", operacao);
    free(p);
}

int sort(int *lista_numeros[], int *p, int i, int j)
{
    int operacao = 0;

    if (i >= j)
        return operacao;

    int m = (i + j) / 2;

    sort(lista_numeros, p, i, m);
    sort(lista_numeros, p, m + 1, j);

    if (lista_numeros[m] <= lista_numeros[m + 1])
    {
        return operacao;
    }
    operacao = operacao + merge(lista_numeros, p, i, m, j);
    return operacao;
}

int merge(int *lista_numeros[], int *p, int i, int m, int j)
{
    int z, iv = i, ic = m + 1, operacao = 0;

    for (z = i; z <= j; z++)
    {
        p[z] = lista_numeros[z];
        operacao++;
    }

    z = i;

    while (iv <= m && ic <= j)
    {
        if (p[iv] <= p[ic])
        {
            lista_numeros[z++] = p[iv++];
        }
        else
        {
            lista_numeros[z++] = p[ic++];
        }
        operacao++;
    }

    while (iv <= m)
    {
        lista_numeros[z++] = p[iv++];
        operacao++;
    }

    while (ic <= j)
    {
        lista_numeros[z++] = p[ic++];
        operacao++;
    }
    return operacao;
}

int quick(int vet[], int esq, int dir)
{
    int pivo = esq, i, ch, j, operacao = 0;
    for (i = esq + 1; i <= dir; i++)
    {
        j = i;
        if (vet[j] < vet[pivo])
        {
            ch = vet[j];
            while (j > pivo)
            {
                vet[j] = vet[j - 1];
                j--;
            }
            vet[j] = ch;
            pivo++;
        }
        operacao++;
    }
    if (pivo - 1 >= esq)
    {
        operacao = operacao + (vet, esq, pivo - 1);
    }
    if (pivo + 1 <= dir)
    {
        operacao = operacao + quick(vet, pivo + 1, dir);
    }
    return operacao;
}
