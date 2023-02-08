#include <stdio.h>
#define tam 16

int main(void) {
  int i = 0, j, k, div;
  div = tam / 2;
  float vetor[tam], aux[div];

  printf("Digite 16 valores\n");

  for (i = 0; i < tam; i++) {
    scanf("%f", &vetor[i]);
  }

  // trocando os valores
  printf("\n");
  for (j = 0; j < div; j++) {
    aux[j] = vetor[j];
  }

  printf("\n");

  for (i = 0; i < div; i++) {
    vetor[i] = vetor[i + j];
  }

  i = 0;

  for (k = j; k < tam; k++) {
    vetor[k] = aux[i];
    i++;
  }

  printf("\nPosição dos 8 ultimos números invertendo com os 8 primeiros\n");
  for (i = 0; i < tam; i++) {
    printf("%.0f\t", vetor[i]);
  }

  return 0;
}
