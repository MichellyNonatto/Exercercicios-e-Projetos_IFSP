#include <stdio.h>

int main(void) {
int n = 0, i = 0, cont = 0;

  do{
    i = i + n;
    cont++;
    n++;
  }while(i < 250);

  printf("É presciso calcular %d vezes para que a sequêcia chegue até 250.",cont);
  
  return 0;
}