#include "adivinha.h"
#include <stdio.h>

int main(void) {
  int x;

  titulo();
  x = chance();

  switch (x) {
  case 0:
    printf("\t-----------------------------------\t\n");
    printf("\t\tPareb�ns voc� acertou!!!\t\t\n");
    printf("\t-----------------------------------\t\n");
    break;
  case 1:
    printf("\t-----------------------------------\t\n");
    printf("\t\tN�o foi dessa vez :(\t\t\n");
    printf("\t-----------------------------------\t\n");
    printf("Mas continue tentando");
    mostrarResposta();
    break;
  }
  return 0;
}
