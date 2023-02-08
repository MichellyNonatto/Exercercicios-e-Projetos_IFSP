#include "calendario.h"
#include <stdio.h>

int main(void) {
  int a, m, d;
  float reslt;

  printf("Para que dê certo é necessário seguir esse padrão\n"
         "Dite a data da seguinte forma\n"
         "dd/mm/aaaa\n");
  d = data();
  m = data();
  a = data();
  reslt = dataJuliana(a, m, d);
  printf("%.0f é da data %d/%d/%d no calendário Juliano.\n",reslt,d,m,a);
  
  switch(semana(reslt)){
    case 0: 
    printf("Segunda-feira");
    break;
    case 1:
    printf("Terça-feira");
    break;
    case 2:
    printf("Quarta-feira");
    break;
    case 3:
    printf("Quinta-feira");
    break;
    case 4:
    printf("Sexta-feira");
    break;
    case 5:
    printf("Sábado");
     break;
    case 6:
    printf("Domingo");
    break;
    default:
    printf("Ouve algum erro.");
  }
  return 0;
}