#include <stdio.h>

int main(void) {

  int var, i, j;

  printf("Digite um valor entre 3 e 18 : ");
  scanf("%d", &var);

  if (var < 3 || var > 18) {
    printf("Somente valores maiores que 3 e menores que 18!");
  } else {
    for (i = 0; i < var; i++) {
      for (j = 0; j < var; j++) {
        printf("%d %d\n", i, j);
      }
    }
  }

  return 0;
}