#include <stdio.h>

int main(void) {

  int var, i;
  printf("Digite um valor POSITIVO: ");
  scanf("%d", &var);

  if (var > 0) {
    for (i = var; i > -var; i--) {
      printf("%d\t", i);
    }
  } else {
    printf("Entre com valores POSITIVOS.");
  }

  return 0;
}