#include "conversor.h"
#include <stdio.h>

int main(void) {
  float t, n;

  printf("Digite a temperatura em Kelvins: ");
  scanf("%f", &n);

  t = kelvin(n);
  printf("A temperatura %.2f K° fica em: %.2f °F",n,t);
  return 0;
}