#include <stdio.h>

int main(void) {
  int i;
  float m, p, aux = 0, n;
  printf("Calcule a média do seu aluno\n");

  for(i = 0; i < 3; i++){
    printf("Digite a nota: ");
    scanf("%f", &n);
    printf("Digite o peso dessa nota: ");
    scanf("%f", &p);
    aux = aux + (n + p);   
  }

  m = aux/3;
  printf("A média de seu aluno é de: %.2f",m);
  return 0;
}