#include <stdio.h>

int main(void) {
  int n, x, i, var;
  printf("\nDigite um valor entre 2 e 9 : ");
  scanf("%d", &n);

  while ((n >= 2) && (n < 9)) {

    int erro = 0;

    for (i = 2; i <= 3; i++) {
      x = n * i;
      printf("%d X %d = ", n, i);
      scanf("%d", &var);

      if (var != x) {
        i = 1;
        erro++;
      }
    }

    printf("\nVocê teve que fazer a tabuada : %d\n", erro);
    printf("\nDigite um valor entre 2 e 9 para continuar : ");
    scanf("%d", &n);
  }

  printf("\nFim da execução");

  return 0;
}