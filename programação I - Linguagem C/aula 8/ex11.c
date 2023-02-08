/*
Escreva um programa que recebe duas strings str1 e str2 e indica se str2 está contida
em str1. Exemplo: a string “baca” está contida em “abacate”
*/
#include <stdio.h>
#include <string.h>
#define tam 15

int main(void) {
  char str1[tam], str2[tam];
  int i, j ,aux = 0;

  printf("Escreva a string 1: ");
  fgets(str1, sizeof(str1), stdin);
  if(str1[strlen(str1) - 1] == '\n')str1[strlen(str1) - 1] = '\0';

    printf("Escreva a string 2: ");
  fgets(str2, sizeof(str2), stdin);
  if(str2[strlen(str2) - 1] == '\n')str2[strlen(str2) - 1] = '\0';

  for(i = 0; i < sizeof(str1); i++){
    if(str1[i] == str2[i]){
      printf("%s está contido em %s", str1, str2);
      i = sizeof(str1);
    }
  }
  return 0;
}