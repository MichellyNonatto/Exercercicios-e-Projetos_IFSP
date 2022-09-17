#include <stdio.h>

int main(void) {
  int valor;

  do{
    
    printf("Digite um valor : ");
    
    scanf("%d",&valor);

    if((valor%2) == 0) printf("Valor par.\n");
    
  }while((valor%2) == 0);
  
  printf("Valor impar.");
  
  return 0;
}