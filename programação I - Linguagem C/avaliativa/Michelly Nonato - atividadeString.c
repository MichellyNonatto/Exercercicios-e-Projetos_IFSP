#include <stdio.h>
#include <string.h>

#define linha 5
#define vetor 30

int main(void) {
  char matriz[linha][vetor];
  int i, j, igualdade;

  printf("---------------------------------\n");
  printf("\t\tDigite %d palavras de até %d caracter\t\t",linha, vetor);
  printf("\n---------------------------------\n");
  
  for (i = 0; i < linha; i++) {
    fgets(matriz[i], sizeof(matriz), stdin);
    if(matriz[i][strlen(matriz[i-1])]=='\n')matriz[i][strlen(matriz[i-1])]='\0';
  }

  printf("\nMatriz das Palavra que você escreveu\n\n");
  for (i = 0; i < linha; i++) {
    for (j = 0; j < i; j++) {
      igualdade = strcmp(matriz[j], matriz[i]);
      if (igualdade == 0)
        matriz[i][j] = '\0';
    }

    printf("%s\n", matriz[i]);
  }
  return 0;
}
