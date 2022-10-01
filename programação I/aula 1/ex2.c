#include <stdio.h>

int main(void) {
  int h, r, vl;
  printf("Digite a atura do cilindro: ");
  scanf("%d",&h);
  printf("Digite o raio do cilindro: ");
  scanf("%d",&r);

  vl=3,14*r*r*h;
  printf("Seu volume é de: %dm³",vl);
  return 0;
}