#include <stdio.h>

int main(void) {
  int n = 0, x = 0, y = 0, max, v = 0;
  char l;

  printf("Calculando as seguintes fórmulas -> \n");
  printf("\nA- f(x,y) = (3x)²+y²\n"
         "\nB- f(x,y) = 2(x²) + (5y)²\n"
         "\nC- f(x,y) = -100x + y³\n");

  do {
    printf("\nDigite os valores de x e y.\n");
    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);

    if (x < 50 && x > 1 && y < 50 && y > 1) {
      v = 0;
    } else {
      printf("\nValor inválido!\n");
      v = 1;
    }

  } while (v == 1);

  for (int i = 1; i <= 3; i++) {
    switch (i) {
    case 1:
      n = (3 * x + 3 * x) + y * y;
      max = n;
      l = 'A';
      break;
    case 2:
      n = 2 * (x * x) + (5 * y + 5 * y);
      if (n > max) {
        max = n;
        l = 'B';
      }
      break;
    case 3:
      n = -100 * x + (y * y * y);
      if (n > max) {
        max = n;
        l = 'C';
      }
      break;
    default:
      printf("Algo deu errado, reinicie o programa!\n");
      i = 4;
    }
  }

  printf("\nPara x = %d e y = %d, o maior resultado é o da função %c\n",x,y,l);
  printf("\nFim da execução do programa...\n");

  return 0;
}