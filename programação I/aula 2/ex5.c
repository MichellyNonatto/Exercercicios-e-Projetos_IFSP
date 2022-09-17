#include <stdio.h>

int main(void) {

  float nota[4];

  printf("Digite a no ta do aluno (1/4): ");
  scanf("%f", &nota[0]);

  printf("Digite a no ta do aluno (2/4): ");
  scanf("%f", &nota[1]);

  printf("Digite a no ta do aluno (3/4): ");
  scanf("%f", &nota[2]);

  printf("Digite a no ta do aluno (4/4): ");
  scanf("%f", &nota[3]);

  float media1 = (nota[0] * 0.6) + (nota[1] * 0.4);

  float media2 = (nota[2] * 0.7) + (nota[3] * 0.3);

  float mediaFinal = (media1 + media2) / 2;

  if (mediaFinal >= 6.0) {
    printf("Aluno aprovado");
  } else if (mediaFinal < 4) {
    printf("Aluno reprovado");
  } else {
    printf("Aluno de recuperação");
  }

  return 0;
}