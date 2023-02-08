#include <stdio.h>

int main(void) {
  int d = 0, max = d, min = d, i = 0;
  float med = 0, soma = 0;

  printf("Entre com uma idade (digite 0 para terminar): ");
  scanf("%d", &d);
  while (d != 0) {
    // primeira verificação, se a idade é menor que 0;
    if (d < 0)
      printf("\nHumanos tem suas idades determinada com números naturais!\n"
             "Ou se seja, somente valor inteiro e maior que 0.\n\n");

    // segunda verificação, se o número é muito grande;
    if (d >= 150)
      printf("\nA relatos que a pessoa mais velha do mundo tem 145 "
             "anos, acho que você não tem mais que isso.\n\n");

    // condição para o maior número digitado;
    if (d > max && d < 150)
      max = d;

    // condição para o menor número digitado;
    if (min == 0) min = d;
      if (d < min && d > 0)
        min = d;

    // quantidade de vezes que entrou um valor;
    if (d > 0 && d < 150){
      i++;

    // soma das idades;
    soma = soma + d;
    }
    
    printf("Entre com uma idade (digite 0 para terminar): ");
    scanf("%d", &d);
  }

  if (i > 0) {
    med = soma / i;
    printf("\nVocê digitou um total de %d idades.\n"
           "\nA maior idade digitada foi %d\n"
           "\nA menor idade digitada foi %d\n"
           "\nA média de idades é %.2f\n",
           i, max, min, med);
  } else {
    printf("\nVocê não digitou nenhum valor\n");
  }
  printf("\nFim da execução do programa...");
  return 0;
}