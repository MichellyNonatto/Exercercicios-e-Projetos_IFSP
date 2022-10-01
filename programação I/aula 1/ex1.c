#include <stdio.h>

int main(void) {

  float x, y, soma, subtracao, multiplicacao, divisao;

  printf("Digite um valor: ");
  scanf("%f", &x);
  printf("Digite um valor: ");
  scanf("%f", &y);

  soma = x + y;
  subtracao = x - y;
  multiplicacao = x * y;
  divisao = x / y;

  printf("\n soma = %2.f\n subtração = %2.f\n multiplicação = %2.f\n divisão = "
         "%2.f\n",
         soma, subtracao, multiplicacao, divisao);
  return 0;
}