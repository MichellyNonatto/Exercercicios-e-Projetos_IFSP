#include <stdio.h>

int main(void) {
  int x, y, z, cont, verificar;
  verificar = 1;
  
  while (verificar == 1) {

    printf("Digite o valor de x : ");
    scanf("%d", &x);

    printf("Digite o valor de y, ele tem que ser maior que x : ");
    scanf("%d", &y);

    printf("Digite o valor de z, ele tem que ser maior que 0 : ");
    scanf("%d", &z);

    if ((y < x) || (z < 0)) {
      printf("Valores inválidos\n \n");
      verificar = 1;
    }else{
      verificar = 0;
    }
  }

  while (x < y) {
    x = x + z;
    cont++;
  }

  printf("Foi preciso calcular %d vezes para chegar o x á %d.",cont,y);

  return 0;
}

/*
x menor que y e z maior que 0

calcular x + z até dar o resultado igual ou maior a y
*/