#include <stdio.h>
#define tam 10
/*
– Faça um programa que leia um vetor de 10 caracteres, e diga quantas consoantes
foram lidas. Imprima as consoantes.
*/

int main(void) {
  printf("Digite %d letras\n", tam);
  int i, j, consoante = 0, x = 0;
  char vetor[tam], vogal[5];
  vogal[0] = 'a';
  vogal[1] = 'e';
  vogal[2] = 'i';
  vogal[3] = 'o';
  vogal[4] = 'u';

  for (i = 0; i < tam; i++) {
    scanf("%s", &vetor[i]);
  }

  for (i = 0; i < tam; i++) {
    for (j = 0; j < 4; j++) {
      if (vetor[i] == vogal[j]) {
        x = 1;
        j = 5;
      } else {
        x = 0;
      }
    }
    if (x == 0)
      consoante++;
  }

  printf("\nVocê digitou %d consoantes", consoante);
  return 0;
}
