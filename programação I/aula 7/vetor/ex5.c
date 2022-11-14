#include <stdio.h>
#define tam 10
int main(void) {
  int teste1[tam], teste2[tam], i, j;
  printf("Digite 10 valores\n");

  for (i = 0; i < tam; i++) {
    scanf("%d", &teste1[i]);
  }

  for (i = 0; i < tam; i++) {
    if (teste1[i] % 2 == 0)
      teste2[i] = teste1[i] * 5;
    else
      teste2[i] = teste1[i] + 5;
  }

  printf("\n vetor um:\t");
  for (i = 0; i < tam; i++) {
    printf("%d\t", teste1[i]);
  }

  printf("\n vetor dois:\t");
  for (i = 0; i < tam; i++) {
    printf("%d\t", teste2[i]);
  }
  return 0;
}

/*
Faça um programa que leia 10 valores inteiros armazenando-os em um vetor chamado
teste1. Utilizando outro vetor (teste2) de 10 posições, preencha-o utilizando a
seguinte regra: se o valor do índice de teste2 for par, o valor do elemento deve
ser igual ao elemento equivalente de teste1 multiplicado por 5; se for ímpar,
deverá ser somado com 5. Ao final, mostrar o conteúdo dos dois vetores.
*/
