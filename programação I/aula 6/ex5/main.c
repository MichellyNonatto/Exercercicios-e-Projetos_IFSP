#include "calendario.h"
#include <stdio.h>

int main(void) {
  int a, m, d;
  float reslt;

  printf("Para que dê certo é necessário seguir esse padrão\n"
         "Dite a da da seguinte forma\n"
         "dd/mm/aaaa\n");
  d = data();
  m = data();
  a = data();
  reslt = dataJuliana(a, m, d);
  printf("%.0f é da data %d/%d/%d no calendário Juliano.",reslt,d,m,a);
  return 0;
}