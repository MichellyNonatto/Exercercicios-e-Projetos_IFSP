#include <stdio.h>

int main(void) {
  int i;
  printf("Digite  o ano e saiba se é bissexto ou não: ");
  scanf("%d", &i);
  if (i % 4 == 0 && i % 100 != 0) {
    printf("\n%d é um ano bissexto.", i);
  } else if ((i % 4 == 0) && (i % 400 == 0) && (i % 100 == 0)) {
    printf("\n%d é um ano bissexto.", i);
  } else {
    printf("\n%d não é um ano bissexto.", i);
  }
  return 0;
}