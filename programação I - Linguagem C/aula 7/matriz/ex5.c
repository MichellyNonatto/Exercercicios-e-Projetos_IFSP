/*
Faça um programa que utilize uma matriz TAM x TAM e preencha-a valores
aleatórios entre 0 e 500. Em seguida o programa deve ordenar a matriz em ordem
crescente (da esquerda para direita, de cima para baixo) e apresentá-la na tela.
Utilize TAM como uma constante e teste o programa com TAM = 10, 20, 25 e 30.
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main() {
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));
  int i, j, aux, matriz[tam][tam], k, l;

  aux = 0;
  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      matriz[i][j] = rand() % 501;
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n");
  }
  printf("\n");

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      for (l = i; l < tam; l++) {
        for (k = j; k < tam; k++) {
          if (matriz[i][j] > matriz[l][k]) {
            aux = matriz[i][j];
            matriz[i][j] = matriz[l][k];
            matriz[l][k] = aux;
          }
        }
      }
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n");
  }
  return 0;
}
