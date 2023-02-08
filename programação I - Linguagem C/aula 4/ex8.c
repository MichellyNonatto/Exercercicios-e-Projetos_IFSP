#include <stdio.h>

int main(void) {
  int n, x, i, var;
  printf("\nDigite um valor entre 2 e 9 : ");
  scanf("%d", &n);

  while ((n >= 2) && (n < 9)) {

    int acerto = 0, erro = 0, acertoPrimeira = 0;

    for (i = 2; i <= 9; i++) {
      x = n * i;

      printf("%d X %d = ", n, i);
      scanf("%d", &var);

      if (var == x)
        acertoPrimeira++;

      do {
        if (var == x)
          break;
        if (var != x)
          erro++;
        printf("%d X %d = ", n, i);
        scanf("%d", &var);
        if (var == x)
          acerto++;
      } while (var != x);
    }

    printf("\nVocê teve o total de : %d acertos de primeira, %d acertos "
           "secundários e %d erros.\n",
           acertoPrimeira, acerto, erro);
    printf("\nDigite um valor entre 2 e 9 : ");
    scanf("%d", &n);
  }

  printf("Fim da execução");

  return 0;
}