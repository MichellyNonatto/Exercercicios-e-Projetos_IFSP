#include <stdio.h>

int main(void) {
  float m, calc;
  printf("Escreva um valor em metros: ");
  scanf("%f", &m);

  calc = m * 1000;
  printf("%.2fm é %.2fcm", m, calc);
  return 0;
}