#include <stdio.h>

int main(void) {
  float n, c, d;
  printf("Digite seus dias trabalhados: ");
  scanf("%f",&n);

  c = n*100;
  d = c-(0.08*c);

  printf("\nSeu salário será de: R$%.2f",d);
  return 0;
}