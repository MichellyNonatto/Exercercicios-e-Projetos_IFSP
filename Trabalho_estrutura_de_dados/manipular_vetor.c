#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void desordenado(int tamanho_vetor, int *ponteiro)
{
    srand((unsigned int)time(NULL));

    for (int i = 0; i < tamanho_vetor; i++)
    {
        ponteiro[i] = rand() % tamanho_vetor;
    } // Parcialmente desordenado
}

void invertido(int tamanho_vetor, int *ponteiro)
{
    srand((unsigned int)time(NULL));

    int j = 0;
    for (int i = tamanho_vetor; i > 0; i--)
    {
        ponteiro[j] = i;
        j++;
    } // Totalmente desordenado
}

void mostrarVetor(int lista_numeros[], int tamanho_vetor)
{
    int i;

    printf("Ordem atual do vetor 'lista_numeros'\n\n");

    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("%4d", lista_numeros[i]);
        printf("\t\t");
    }

    printf("\n\n");
}
