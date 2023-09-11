#include <stdio.h>
#include <stdlib.h>

// Algoritmo de ordenação
void bubbleSort(int lista_numeros[], int tamanho_lista_numeros)
{
    int i, aux, contador, operacao = 0;

    for (contador = 1; contador <= tamanho_lista_numeros; contador++)
    {
        for (i = 0; i < tamanho_lista_numeros; i++)
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

void insert(int lista_numeros[], int tamanho_lista_numeros)
{
    int i, aux, j = 1, operacao = 0;

    while (j < tamanho_lista_numeros)
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

void selection(int lista_numeros[], int tamanho_lista_numeros)
{
    int i, j, aux, min, operacao = 0;

    for (i = 0; i <= (tamanho_lista_numeros - 1); i++)
    {
        min = i;

        for (j = i + 1; j < tamanho_lista_numeros; j++)
        {
            if (lista_numeros[j] <= lista_numeros[min])
                min = j;

            aux = lista_numeros[i];
            lista_numeros[i] = lista_numeros[min];
            lista_numeros[min] = aux;

            operacao++;
        }
    }

    printf("Total de operações realizadas: %d", operacao);
}

void mergeSort(int lista_numeros[], int tamanho_lista_numeros)
{
    int *p = malloc(sizeof(int) * tamanho_lista_numeros), operacao = 0;

    operacao = operacao + sort(lista_numeros, p, 0, tamanho_lista_numeros - 1);

    printf("Total de operações realizadas: %d", operacao);

    free(p);
}

int sort(int lista_numeros[], int *p, int i, int j)
{
    int operacao = 0;

    if (i >= j)
        return operacao;

    int m = (i + j) / 2;

    sort(lista_numeros, p, i, m);
    sort(lista_numeros, p, m + 1, j);

    if (lista_numeros[m] <= lista_numeros[m + 1])
        return operacao;

    operacao = operacao + merge(lista_numeros, p, i, m, j);

    return operacao;
}

int merge(int lista_numeros[], int *p, int i, int m, int j)
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
            lista_numeros[z++] = p[iv++];
        else
            lista_numeros[z++] = p[ic++];

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

int quick(int lista_numeros[], int esq, int dir)
{
    int pivo = esq, i, ch, j, operacao = 0;

    for (i = esq + 1; i <= dir; i++)
    {
        j = i;

        if (lista_numeros[j] < lista_numeros[pivo])
        {
            ch = lista_numeros[j];

            while (j > pivo)
            {
                lista_numeros[j] = lista_numeros[j - 1];
                j--;
            }
            
            lista_numeros[j] = ch;
            pivo++;
        }
        operacao++;
    }
    if (pivo - 1 >= esq) operacao = operacao + quick(lista_numeros, esq, pivo - 1);
    
    if (pivo + 1 <= dir) operacao = operacao + quick(lista_numeros, pivo + 1, dir);
    return operacao;
}