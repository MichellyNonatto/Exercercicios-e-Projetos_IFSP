/*
 Escreva um programa que recebe uma string e elimina os caracteres em branco
 tanto à direita quanto à esquerda.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char vet[30];

  printf("Escreva uma palavra: ");
  fgets(vet, sizeof(vet), stdin);
  if (vet[strlen(vet) - 1] == '\n')
    vet[strlen(vet) - 1] = '\0';

  if (strlen(vet) > 0) {
    for (int i = 0; i < strlen(vet); i++) {
      if (vet[i] == ' ') {
        vet[i] = vet[i+1];
        vet[i+1] = ' ';
      }
    }
    printf("-%s-", vet);
  } else
    printf("Vetor vazio.");

  return 0;
}