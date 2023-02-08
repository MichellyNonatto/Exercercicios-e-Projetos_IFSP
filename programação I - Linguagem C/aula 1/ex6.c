#include <stdio.h>

int main(void) {
  float cont, var;
  printf("Digite o valor total da compra: ");
  scanf("%f", &var);
  cont = var - (var * 0.1);
  printf("O valor de 10 porcento de desconto é de: R$%.2f", cont);
  return 0;
}