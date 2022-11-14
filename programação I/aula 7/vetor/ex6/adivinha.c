#include "adivinha.h"
#include <stdio.h>
int vetorChances[tentativa];
	
	void titulo() {
	  printf("\t-----------------------------------\t\n");
	  printf("\t\tQue n�mero estou pensando?\t\t\n");
	  printf("\t-----------------------------------\t\n");
	}
	
	int chance(int resposta) {
	  int i, j, x = 1;
	
	  for (i = 0; i < tentativa; i++) {
	    scanf("%d", &vetorChances[i]);
	    if(vetorChances[i] != resposta) dica(vetorChances[i], resposta);
	    for (j = 0; j < i; j++) {
	      if (vetorChances[i] == vetorChances[j]) {
	        printf("Voc� j� digitou esse n�mero\n");
	        i--;
	      } else if (vetorChances[i] == resposta) {
	        i = tentativa;
	        j = i;
	        x = 0;
	      }
	    }
	    x = vetorChances[i];
	  }
	  return x;
	}
	
	void dica(int dica, int resposta) {
	  if (dica > resposta) {
	    printf("O n�mero � menor\n");
	  } else if (dica < resposta) {
	    printf("O n�mero � maior\n");
	  }
	}
	
	void mostrarResposta(int resposta) {
	  int i;
	  printf("\n\nOs valores que voc� chutou foram:\n");
	  for (i = 0; i < tentativa; i++) {
	    printf("%d\t", vetorChances[i]);
	  }
	  printf("\n\nE a resposta correta era\n");
	  printf("\t\t%d\t\t\n", resposta);
	}
