#include "ordem.h"
#include <stdio.h>

int main(void) {
  int op = 0;
  printf("Escolha uma das op��es:\n");
  printf("0 - Ordem Crescente\n");
  printf("1 - Ordem Decrescente\n");
  printf("\n2 - Finalizar programa\n\n");

  while (op != 2) {
    scanf("%d", &op);
    switch (op) {
    case 0:
      printf("Ordem Crescente\n");
      digitar(op);
      break;

    case 1:
      printf("Ordem Decrescente\n");
      digitar(op);
      break;
      
      case 2:
      break;

    default:
      printf("Op��o inv�lida!");
      break;
    }

    if (op == 1 || op == 0)
      printf("\nEscolha uma nova op��o:\t");
  }

  printf("Fim da execu��o.");

  return 0;
}
