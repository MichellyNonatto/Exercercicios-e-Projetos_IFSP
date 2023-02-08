#include <stdio.h>
#define tam 25
/*
- Faça um programa que utilize uma matriz TAM x TAM e preencha-a com zeros e em
seguida preencha as duas diagonais com o valor 1. Após isso, imprima a matriz
resultante. Utilize TAM como uma constante e teste o programa com TAM = 10, 20,
25 e 30.
*/
int main(void) {
  int matriz[tam][tam], i, j, k;

 /* for (i = 0; i < tam; i++) {

    for (j = 0; j < tam; j++) {
      matriz[i][j] = 0;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  // diagonal secundária
  printf("\n\n");

  for (i = 0; i < tam; i++) {

    for (j = 0; j < tam; j++) {

      if (j == i)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  // diagonal primaria
  printf("\n\n");

  for (i = 0; i < tam; i++) {

    for (j = tam; j > 0; j--) {

      if (j == i + 1)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;

      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
*/
  printf("\n\n");

  k = tam - 1;
  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      if (j == i)
        matriz[i][j] = 1;
      else if (j == k) {
        matriz[i][j] = 1;
        k--;
      } else
        matriz[i][j] = 0;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
