#include <stdio.h>

int main(void) {
  float cm, calc;
  printf("Escreva um valor em cm: ");
  scanf("%f", &cm);

  calc = cm / 1000;
  printf("%2.fcm é %.2fm", cm, calc);
  return 0;
}