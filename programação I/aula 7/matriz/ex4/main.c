#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que utilize uma matriz TAM x TAM e preencha-a valores
aleatórios entre 0 e 500. Imprima a matriz resultante e em seguida são
apresentadas duas opções para o usuário: a primeira opção faz com que seja
apresentado o menor valor presente na matriz e a segunda opção o m
*/
int main(void) {
  int i = -1, j, aux;

  tabela(tam);

  do {
    i = escolha();
    printf("\n\n");

    switch (i) {
    case 1:
      printf("O maior valor é: %d", maiorValor());
      printf("\n\n");
      break;
      case 2:
        printf("O menor valor é: %d", menorValor());
      break;
    }
  } while (i != 0);

  printf("\n\nFim da execussão do programa");
  return 0;
}
