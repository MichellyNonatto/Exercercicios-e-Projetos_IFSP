#include <stdio.h>
#include <stdlib.h>

void desordenado(int lista_numeros[], int tamanho_vetor)
{
    for (int i = 0; i < tamanho_vetor; i++)
    {
        lista_numeros[i] = rand() % tamanho_vetor;
    } // Parcialmente desordenado
}

void invertido(int lista_numeros[], int tamanho_vetor)
{
    int j = 0;
    for (int i = tamanho_vetor; i > 0; i--)
    {
        lista_numeros[j] = i;
        j++;
    } // Totalmente desordenado
}

void mostrarVetor(int lista_numeros[], int tamanho_vetor)
{
    int i;

    printf("\nOrdem atual do vetor 'lista_numeros'\n\n");

    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("%4d", lista_numeros[i]);
        printf("\t\t");
    } //    Retorno de todos os valores existentes no array lista_numeros[]

    printf("\n\n");
}
