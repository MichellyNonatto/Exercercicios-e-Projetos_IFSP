#include <stdio.h>

int main(void) {

  int n1, n2, i;

  printf("Digite um valor entre 0 e 1: ");
  scanf("%d", &n1);

  printf("Digite um valor: ");
  scanf("%d", &n2);

  if ((n1 != 0) && (n1 != 1)) {
    printf("Digitar apenas os números 1 e 0!");

  } else if (n1 == 0) {

    for (i = n2; i >= 0; i--) {
      printf("%d\t", i);
    }

  } else {

    for (i = 0; i <= n2; i++) {
      printf("%d\t", i);
    }
  }

  return 0;
}

/*

receber 2 valores somente 1 ou 0

se valor 1 == 1
retornar o valor 2 em contagem regressiva valor 2 até 0

se valor 1 == 0
retornar o valor 2 em contagem progressiva 0 até valor 2

*/