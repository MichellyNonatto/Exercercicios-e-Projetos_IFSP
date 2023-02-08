#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int matriz[tam][tam];

void tabela() {
  srand(time(NULL));
  int i, j;
  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      matriz[i][j] = rand() % 151;
      printf("%d\t", matriz[i][j]);
    }
 
    printf("\n\n");
  }
}

int escolha() {
  int i = -1;
  printf("\n-------------------------------------\n");
  printf("\t\tEscolha entre as opções\t\t");
  printf("\n-------------------------------------\n");
  printf("1- Mostrar maior valor\n"
         "2- Menor valor\n"
    "0- Encerrar o programa\n");

  while (i != 1 && i != 2 && i != 0) {
    printf(": ");
    scanf("%d", &i);
    if (i != 1 && i != 2 && i != 0)
      printf("Opção inválida :(\n");
  }
  return i;
}

int maiorValor() {
  int i, j, max = 0;

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      if (matriz[i][j] > max)max = matriz[i][j];
    }
  }
  return max;
}

int menorValor(){
  int i, j, min = matriz[0][0];

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      if (matriz[i][j] < min)min = matriz[i][j];
    }
  }
  return min;
}
