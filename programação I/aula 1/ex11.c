#include <stdio.h>

int main(void) {
  int a, b, c, r, s;
  float d;
  printf("Digite o valor de 'A': ");
  scanf("%d", &a);
  printf("Digite o valor de 'B': ");
  scanf("%d", &b);
  printf("Digite o valor de 'C': ");
  scanf("%d", &c);

  if (a < 0 || b < 0 || c < 0) {
    printf("\nSomente valores positivos");
    return 0;
  }

  r =(a+b)*(a+b);
  s = (b+c)*(b+c);
  d = (r+s)/2;

    printf("\nO resultado da conte é de : %.2f\n",d);

  printf("\nFim da execução do programa...");
  return 0;
}