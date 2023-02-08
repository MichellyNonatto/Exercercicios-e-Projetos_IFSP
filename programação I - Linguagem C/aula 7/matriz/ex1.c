#include <stdio.h>
#define tam 3
/*
– Escreva um programa que receba nove valores e os apresente na tela. Use uma matriz 3 x 3.
*/
int main(void) {
  int matriz[tam][tam], i, j;

  for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
     printf("\n");
   for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
      printf("%d\t", matriz[i][j]);
    }
     printf("\n");
  }
  return 0;
}
