#include <stdio.h>
#define tam 7

int main(void) {
  float var[tam], media, aux = 0, max = 0, min = 0;
  int i, j = 0, k;

  printf("Digite 7 valores inteiros\n");
  for (i = 0; i < tam; i++) {
    scanf("%f", &var[i]);
    aux = aux + var[i];

    for (j = j; var[i] > j; j = var[i]) {
      max = var[i];
    }
    k = max;

    for (k = k; k > var[i]; k = var[i]) {
      min = var[i];
    }
  }

  media = aux / tam;
  printf("\nA média dos valores é de %.2f\n", media);
  printf("O maior valor é %.2f\n", max);
  printf("O menor valor é %.2f\n", min);
  return 0;
}
