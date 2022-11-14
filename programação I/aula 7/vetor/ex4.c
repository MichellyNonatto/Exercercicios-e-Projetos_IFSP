#include "ordem.h"
#include <stdio.h>

int main(void) {
  int op = 0;
  printf("Escolha uma das opções:\n");
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
      printf("Opção inválida!");
      break;
    }

    if (op == 1 || op == 0)
      printf("\nEscolha uma nova opção:\t");
  }

  printf("Fim da execução.");

  return 0;
}
