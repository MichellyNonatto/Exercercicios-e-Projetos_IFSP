#include <stdio.h>

int main(void) {

  int var[3];

  printf("Escreva um valor (1/3) :");
  scanf("%d", &var[0]);

  printf("Escreva um valor (2/3) :");
  scanf("%d", &var[1]);

  printf("Escreva um valor (3/3) :");
  scanf("%d", &var[2]);

  if ((var[0] < var[1]) && (var[1] < var[2])) {
    printf("A ordem crescente desses números é: \n");
    printf("%d, %d, %d", var[0], var[1], var[2]);

  } else if ((var[0] < var[2]) && (var[2] < var[1])) {
    printf("A ordem crescente desses números é: \n");
    printf("%d, %d, %d", var[0], var[2], var[1]);

  } else if ((var[1] < var[0]) && (var[0] < var[2])) {
    printf("A ordem crescente desses números é: \n");
    printf("%d, %d, %d", var[1], var[0], var[2]);

  } else if ((var[1] < var[2]) && (var[2] < var[0])) {
    printf("A ordem crescente desses números é: \n");
    printf("%d, %d, %d", var[1], var[2], var[0]);

  } else if ((var[2] < var[1]) && var[1] < var[0]) {
    printf("A ordem crescente desses números é: \n");
    printf("%d, %d, %d", var[2], var[1], var[0]);

  } else if ((var[2] < var[0]) && (var[0]) < var[1]) {
    printf("A ordem crescente desses números é: \n");
    printf("%d, %d, %d", var[2], var[0], var[1]);
  }

  return 0;
}

/*
1 2 3 -
1 3 2 -
2 1 3 -
2 3 1
3 2 1
3 1 2
*/