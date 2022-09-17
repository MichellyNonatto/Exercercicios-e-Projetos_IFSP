#include <stdio.h>

int main(void) {
  int i, n, aux;

  for (i = 0; i <= 10; i++) {
    printf("\nDigite um valor diferente de 0 : ");
    scanf("%d", &n);

    switch (n) {
    case 100:
      i = 10;
      break;
    case -100:
      i = 10;
      break;
    }

    if (n == 0) {
      i = i - 1;
      printf("\nPor favor digitar valor maior ou menor que 0.\n");
      n = 0;
    } else {
      aux = aux + n;
      n = 0;
    }
  }

  printf("\nSoma dos 10 valores digitados é de : %d", aux);

  return 0;
}

/*
o usuário irá digitar 10 valores ignorando somente o 0, no fim, apresentar a
soma de todos os valores, porém se for -100 ou 100 parar o laço imediatamente e somar todos os valores.
*/