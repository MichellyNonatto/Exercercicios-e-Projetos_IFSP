#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Fa�a um programa que utilize uma matriz TAM x TAM e preencha-a valores
aleat�rios entre 0 e 500. Imprima a matriz resultante e em seguida s�o
apresentadas duas op��es para o usu�rio: a primeira op��o faz com que seja
apresentado o menor valor presente na matriz e a segunda op��o o m
*/
int main(void) {
  int i = -1, j, aux;

  tabela(tam);

  do {
    i = escolha();
    printf("\n\n");

    switch (i) {
    case 1:
      printf("O maior valor �: %d", maiorValor());
      printf("\n\n");
      break;
      case 2:
        printf("O menor valor �: %d", menorValor());
      break;
    }
  } while (i != 0);

  printf("\n\nFim da execuss�o do programa");
  return 0;
}
