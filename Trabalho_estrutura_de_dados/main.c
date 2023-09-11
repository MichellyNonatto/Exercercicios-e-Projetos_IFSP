#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#include "manipular_vetor.h"
#include "algoritmo_ordenacao.h"

#define TAM 100000 // Tamanho global do vetor utilizado em TODAS as funções

int main()
{
    system("cls");
    system("clear");

    setlocale(LC_ALL, "portuguese");

    clock_t start_time, end_time;
    double cpu_time_used;

    int numeros[TAM];

    // NAS FUNÇÕES A SEGUIR ESCOLHA COMO VOCÊ QUER ORDENAR OS VALORES DENTRO DO ARRAY NUMEROS. A FUNÇÃO DESORDENADO GERA UMA SEQUÊNCIA DE NÚMEROS ALEATÓRIOS COM O RAND, JÁ A FUNÇÃO INVERTIDO GERA UMA SEQUÊNCIA DECRESCENTE A PARTIR DO VALOR DECLARADO NA VARIÁVEL TAM TERMINANDO COM O NÚMERO.

     desordenado(numeros, TAM); // numeros[87, 20, 0, 57, 41, ...]
    // invertido(numeros, TAM); //   numeros[100, 99, 98, 97, 96, ...]

    // mostrarVetor(numeros, TAM); //  Utilize apenas para verificação da sequência retornada pelas funções de ordenação.

    //  LOGO ABAIXO SE ENCONTRA 5 FUNÇÕES DE ORDENAÇÃO, ESCOLHA UMA PARA INICIAR O PROGRAMA
    start_time = clock();
     bubbleSort(numeros, TAM);
    // insert(numeros, TAM);
    // selection(numeros, TAM);
    // mergeSort(numeros, TAM);
    // printf("Total de operações realizadas: %d", quick(numeros, 0, (TAM - 1)));
    end_time = clock();

    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("\n\nTempo de execucao: %f segundos\n", cpu_time_used);

    // mostrarVetor(numeros, TAM);  // Utilize apenas para verificação da sequência retornada pelas funções de ordenação.
    return 0;
}
