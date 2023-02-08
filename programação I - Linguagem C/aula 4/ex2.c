#include <stdio.h>

int main(void) {

  int x, max;

  printf("Digite o valor de x : ");
  scanf("%d", &x);
  max = x;
  x = 0;

  while (x < max) {
    printf("Digite o valor de x : ");
    scanf("%d", &x);
  }

  printf("Valor maior que x");

  return 0;
}