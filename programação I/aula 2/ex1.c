#include <stdio.h> // biblioteca padrão da linguagem C (<cstdio> <iostream> <stdio.h> <locale.h> {essa biblioteca é dependente do código: setlocale(LC_ALL, "Portuguese")})

int main(void) {

  int var[2];

  printf("Digite o valor do primeiro número: ");
  scanf("%d", &var[0]);

  printf("Digite o valor do segundo número: ");
  scanf("%d", &var[1]);

  if (var[0] > var[1]) {
    printf("%d é maior que %d.", var[0], var[1]);
  } else {
    printf("%d é maior que %d.", var[1], var[0]);
  }
  return 0;
}