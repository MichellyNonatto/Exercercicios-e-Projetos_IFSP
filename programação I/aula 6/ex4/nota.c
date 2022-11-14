#include <stdio.h>
#include  "nota.h"

float media (){
  int i;
  float aux = 0, m, n, p;

  for(i = 0; i < 3; i++){
    printf("Digite a nota do seu aluno: ");
    scanf("%f", &n);
    printf("Digite o pesso dessa nota: ");
    scanf("%f", &p);

    aux = aux + (n*p);
  }

  m = aux/3;
  return m;
}

void condicao(float media){
  if(media >= 6) printf("\nAprovado");
  else if(media >= 4 && media < 6) printf("\nRecuperação");
  else printf("\nReprovado");
}