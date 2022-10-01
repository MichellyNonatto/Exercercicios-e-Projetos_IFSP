#include <stdio.h>

int main(void) {

  int var;
  
  printf("Qual o resultado de 10 + 5?\n");
  scanf("%d", &var);

  if(var != 15){
    printf("Resposta incorreta. 10 + 5 = 15");
  }else{
    printf("Resposta Correta");
  }
  
  return 0;
}