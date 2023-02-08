#include <stdio.h>

int main(void) {

  int a, b, c, i, n;

  printf("Digite um valor maior que 1 : ");
  scanf("%d", &a);

  printf("Digite um valor : ");
  scanf("%d", &b);

  printf("Digite um valor maior que o anterior : ");
  scanf("%d", &c);

  if (a <= 1 || c < b) {

    printf("Algum valor você digitou errado, porfavor digite conforme o "
           "enunciado.");

  } else {
    for (i = b; i <= c; i++) {
      if ((i % a) == 0) {
        n++;
      }
    }

    printf("\nentre %d e %d existem %d numeros divisiveis por %d.", b, c, n, a);
  }

  return 0;
}

/*

entrar com 3 valores
valor 1 tem que ser maior que 1
valor 2 menor que valor 3
retornar os valores divisiveis pelo valor 1;

*/