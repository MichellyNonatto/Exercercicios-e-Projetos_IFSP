#include "adivinha.h"
#include <stdio.h>
int vetorChances[tentativa];

void titulo() {
  printf("\t-----------------------------------\t\n");
  printf("\t\tQue n�mero estou pensando?\t\t\n");
  printf("\t-----------------------------------\t\n");
}

int chance() {
  int i, j, x = 1;

  for (i = 0; i < tentativa; i++) {
    scanf("%d", &vetorChances[i]);
    if (vetorChances[i] != numeroMagico)
      dica(vetorChances[i]);
    for (j = 0; j < i; j++) {
      if (vetorChances[i] == vetorChances[j]) {
        printf("Voc� j� digitou esse n�mero\n");
        i--;
      } else if (vetorChances[i] == numeroMagico) {
        i = tentativa;
        j = i;
        x = 0;
      }
    }
  }
  return x;
}

void dica(int dica) {
  if (dica > 13) {
    printf("O n�mero � menor\n");
  } else if (dica < 13) {
    printf("O n�mero � maior\n");
  }
}

void mostrarResposta() {
  int i;
  printf("\n\nOs valores que voc� chutou foram:\n");
  for (i = 0; i < tentativa; i++) {
    printf("%d\t", vetorChances[i]);
  }
}
