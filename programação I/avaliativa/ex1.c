#include <stdio.h>

int main(void) {

  int i;
  printf("------------------- Os números de 1 até 100 -----------------\n");
  printf("\nValores pares existente:\n");
  for (i = 1; i <= 100; i++) {
    if(i%2 == 0){
      printf("%d\t",i);
    }
  }

    printf("\n\nValores ímpares existente:\n");
   for (i = 1; i <= 100; i++) {
    if(i%2 == 1){
      printf("%d\t",i);
    }
  }

  return 0;
}