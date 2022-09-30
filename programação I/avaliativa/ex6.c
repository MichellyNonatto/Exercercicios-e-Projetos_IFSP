#include <stdio.h>

int main(void) {
  int n, p = 0, e = 0, i;
  printf("Digite 15 valores,\n"
         "são desconsiderados valores iguais a 0,\n"
         "eles podem ser positivo ou negativo\n\n");

  for (i = 1; i <= 15; i++) {
    printf("Digite um valor: ");
    scanf("%d", &n);

    if (n == 0) {
      printf("\nValores iguais a 0 não são aceitos\n"
             "\nDigite todos os números novamente\n\n");
      i = 0;
    } else if (n > 0) {
      p++;
    } else {
      e++;
    }
  }
  printf("\n%d valores positivos;\n"
         "%d valores negativos.\n",
         p, e);
  printf("Fim da execução do programa.");
  return 0;
}