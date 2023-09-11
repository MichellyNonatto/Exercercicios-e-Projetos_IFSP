#ifndef FUNCTION_H
#define FUNCTION_H

// Algoritmo de ordenação
void bubbleSort(int lista_numeros[], int tamanho_vetor);
void insert(int lista_numeros[], int tamanho_vetor);
void selection(int lista_numeros[], int tamanho_vetor);
void mergeSort(int lista_numeros[], int tamanho_vetor);
int sort(int lista_numeros[], int *p, int i, int j);
int merge(int lista_numeros[], int *p, int i, int m, int j);
int quick(int lista_numeros[], int esq, int dir);
#endif