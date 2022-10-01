#include <stdio.h>

int main(void) {
  int i, p;
  printf("Indique sua idade: ");
  scanf("%d", &i);
  printf("Indique seu peso: ");
  scanf("%d", &p);

  if (i <= 14 && i >= 13) {

    printf("\nCategoria infantil ");
    if (p <= 45)
      printf("peso leve.");
    else
      printf("peso pesado.");

  } else if (i <= 17 && i >= 15) {

    printf("\nCategoria juvenil ");
    if (p <= 60)
      printf("peso leve.");
    else
      printf("peso pesado.");

  } else if (i >= 18) {

    printf("\nCategoria adulto ");
    if (p <= 85)
      printf("peso leve.");
    else
      printf("peso pesado.");

  } else printf("Idade não caracterizada.");
  return 0;
}