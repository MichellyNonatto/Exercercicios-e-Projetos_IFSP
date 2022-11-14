#include <stdio.h>
#define tam 10

int main(void) {
  float valor[tam];
  int i, j;

  printf("Insira 10 valores\n");
  for (i = 0; i < tam; i++) {
    scanf("%f", &valor[i]);
  }

  printf("Ordem digitada\n");
  for (i = 0; i < tam; i++) {
    printf("%.0f\t", valor[i]);
  }

  printf("\n\nOrdem contrária da digitada\n");

  for (i = tam-1; i >= 0; i--) {
    printf("%.0f\t", valor[i]);
  }
  return 0;
}
