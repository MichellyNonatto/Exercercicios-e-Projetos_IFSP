#include <stdio.h>

int main(void) {
  float n, c = 0, z = 0;
  printf("Digite a quantidade de latão\nque será produzido em kg: ");
  scanf("%f", &n);

  c = 0.7*n;
  z = 0.3*n;

  printf("\nVocê precisará de:\n"
    "\n%.1fkg de cobre;\n"
    "\n%.1fkg de zinco.",c,z);

  return 0;
}