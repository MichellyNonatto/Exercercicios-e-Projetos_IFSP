#include <stdio.h>
#include <string.h>
#define tam 10

int main(void) {
  char str1[tam], str2[tam], aux;
  int i, j, caracterMax;

  printf("Escreva uma palavra: ");
  fgets(str1, sizeof(str1), stdin);
  if (str1[strlen(str1) - 1 == '\n'])
    str1[strlen(str1) - 1] = '\0';

  caracterMax = strlen(str1);
  printf("Quantidade de caracter: %d\n", caracterMax);

  j = caracterMax - 1;

  for (i = 0; i < caracterMax; i++) {
    str2[i] = str1[j];
    j--;
  }
  
//  str2[caracterMax] = '\0';
  printf("%s", str2);
printf("\n\nFim do progrma.");
  return 0;
}