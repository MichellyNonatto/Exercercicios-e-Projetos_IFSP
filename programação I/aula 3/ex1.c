#include <stdio.h>

int main(void) {
  int var, i = 0;

  printf("Digite o um valor: ");
  scanf("%d", &var);

  if (var > 2 && var < 9) {
    printf("\n");
    for (i = 2; i <= 9; i++) {
      printf("%d x %d = %d\n", var, i, (var * i));
    }
    return 0;
  } else {
    printf("Por favor entrar com valores entre 2 e 9");
  }
}