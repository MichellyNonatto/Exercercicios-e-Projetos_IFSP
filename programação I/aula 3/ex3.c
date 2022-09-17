#include <stdio.h>

int main(void) {

  int var, i;

  printf("Digite um valor positivo : ");
  scanf("%d", &var);

  if (var > 0) {

    for (i = var; i >= 0; i--) {
      printf("%d\t", i);
    }

  } else {
    printf("Por favor digitar valores POSITIVOS.");
  }

  return 0;
}