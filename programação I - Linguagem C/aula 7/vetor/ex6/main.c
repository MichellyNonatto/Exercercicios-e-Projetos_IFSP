#include "adivinha.h"
#include <stdio.h>
#include <stdlib.h>//uso da fun��o rand
#include <time.h>//uso da fun��o time
#include <locale.h>//biblioteca de idioma

int main(void) {
	setlocale(LC_ALL,"");
  int x, resposta, i;

  srand(time(NULL));
  
  for(i = 1; i < 100; i++){
    resposta = rand() % 100;
  }

  titulo();
  x = chance(resposta);

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
    mostrarResposta(resposta);
    break;
  }
  return 0;
}
