#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define tam 10
/*
Repita o exerc�cio anterior, mas o vetor deve ser preenchido de forma aleat�ria.
*/

int main(void) {
	setlocale(LC_ALL,"");
  int i, j;
  char vetor1[tam], vetor2[3], aux;
  srand(time(NULL));
  for (i = 0; i < tam; i++) {
    aux = rand() % 122;
    vetor1[i] = aux;

    for (j = 0; j < i; j++) {
      if (vetor1[i] == vetor1[j] || vetor1[i] < 97 || vetor1[i] > 122) {
        i--;
        j = i;
      }
    }
    // printf("\nVetor de porsi��o %d: %c\t", i, vetor1[i]);
  }
  printf("\n");
  for (i = 0; i < tam; i++) {
    printf("%c\t", vetor1[i]);
  }
  printf("\n");
  for (i = 0; i < 3; i++) {
    printf("\nPesquise uma nova letra: ");
    scanf("%s", &vetor2[i]);
    for (j = 0; j < tam; j++) {
      if (vetor2[i] == vetor1[j]) {
        aux = j;
        j = tam;
      } else
        aux = -1;
    }

    if (aux == -1)
      printf("N�o existe esse caracter no vetor :(\n");
    else
      printf("Essa letra est� na posi��o %d\n", aux);
  }

  printf("Fim da execuss�o do programa.");
  return 0;
}
