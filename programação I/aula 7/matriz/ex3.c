#include <stdio.h>
/*
 Faça um programa que utilize uma matriz TAM x TAM e preencha-a com zeros e em
seguida preencha somente as linhas e colunas que estiverem na “borda” com o
valor 1. Após isso, imprima a matriz resultante. Utilize TAM como uma constante
e teste o programa com TAM = 10, 20, 25 e 30.
*/
#define tam 25

int main(void) {
  int matriz[tam][tam], i, j;

  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      if(i == 0 || i == tam-1 || j == 0 || j == tam - 1)matriz[i][j] = 1;
      else matriz[i][j] = 0;
      printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
