#include <stdio.h>
#include <string.h>
#define tam 10

int main(void) {
  char string1[tam], string2[tam];
  int caracterStr1, caracterStr2, vetorStr1, vetorStr2, n;

  printf("Escreva uma palavra: ");
  fgets(string1, sizeof(string1), stdin);
  printf("Escreva uma palavra: ");
  fgets(string2, sizeof(string2), stdin);

  if(string1[caracterStr1 - 1] == '\n') string1[caracterStr1 - 1] = '\0';
  if(string2[caracterStr2 - 1] == '\n') string2[caracterStr2 - 1] = '\0';

  n = strcmp(string1, string2);

  if(n == 0)printf("As string são iguais.");
  else if(n > 0)printf("String 1 menor que a string 2.");
  else printf("String 1 maior que a string 2.");
  return 0;
}