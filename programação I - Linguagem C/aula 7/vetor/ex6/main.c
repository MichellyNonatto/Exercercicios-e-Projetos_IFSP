#include "adivinha.h"
#include <stdio.h>
#include <stdlib.h>//uso da função rand
#include <time.h>//uso da função time
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
    printf("\t\tParebéns você acertou!!!\t\t\n");
    printf("\t-----------------------------------\t\n");
    break;
  case 1:
    printf("\t-----------------------------------\t\n");
    printf("\t\tNão foi dessa vez :(\t\t\n");
    printf("\t-----------------------------------\t\n");
    printf("Mas continue tentando");
    mostrarResposta(resposta);
    break;
  }
  return 0;
}
