#include <locale.h>
#include <time.h>
#include "manipular_vetor.h"
#include "algoritmo_ordenacao.h"

#define TAM 100000 // Tamanho global do vetor utilizado em TODAS as funções

int main()
{
    system("cls");

    setlocale(LC_ALL, "portuguese");

    clock_t start_time, end_time;
    double cpu_time_used;

    int *ponteiro;
    int numeros[TAM];
    ponteiro = numeros;

    //desordenado(TAM, ponteiro);   //Algoritmo para testes
    invertido(TAM, ponteiro); // Algoritmo para testes

    //mostrarVetor(numeros, TAM);   //Algoritmo para testes
    start_time = clock();
    // bubbleSort(numeros, TAM);
    // insert(numeros, TAM);
    // selection(numeros, TAM);
    // mergeSort(numeros, TAM);
    int operacao = 0;
    operacao = quick(numeros, 0, TAM);
    printf("Total de operações realizadas: %d", operacao);
    end_time = clock();

    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("\n\nTempo de execucao: %f segundos\n", cpu_time_used);

    //mostrarVetor(numeros, TAM);   //Algoritmo para testes
    return 0;
}
