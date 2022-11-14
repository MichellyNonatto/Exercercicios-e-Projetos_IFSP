#include <stdio.h>
#include  "nota.h"

int main(void) {
  float m;
  
  printf("Seu Aluno passou ?\n\n");
  m = media();
  printf("A média do seu aluno foi de: %.1f", m);

  condicao(m);
  
  return 0;
}