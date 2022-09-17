#include <stdio.h>

int main(void) {
  int n, x, i, var;
  printf("\nDigite um valor entre 2 e 9 : ");
  scanf("%d", &n);

  while ((n >= 2) && (n < 9)) {
    int acerto = 0, erro = 0;
    for (i = 2; i <= 9; i++) {
      printf("%d X %d = ", n, i);
      scanf("%d", &var);
      x = n * i;

      if (var == x) {
        acerto++;
      } else {
        erro++;
      }
    }

    printf("\nVocê teve o total de : %d acertos e %d erros.\n", acerto, erro);
    printf("\nDigite um valor entre 2 e 9 : ");
    scanf("%d", &n);
  }

  printf("Fim da execução");

  return 0;
}