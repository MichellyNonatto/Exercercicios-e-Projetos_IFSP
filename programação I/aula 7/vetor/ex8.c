#include <stdio.h>
#define tam 7
/*
Fa�a um programa que receba do usu�rio 7 caracteres, armazene-os em um vetor.
Ap�s isso o vetor � colocado em ordem alfab�tica e apresentado na tela.
*/

int main() {
  int i, aux = 0, j;
  char vetor[tam];
  printf("Digite %d letras.\n", tam);

  for (i = 0; i < tam; i++) {
    scanf("%s", &vetor[i]);
  }

  for (i = 0; i < tam; i++) {

    for (j = i+1; j < tam; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
  printf("\n");

  for (i = 0; i < tam; i++) {
    printf("%c\t", vetor[i]);
  }

  return 0;
}
