#include <stdio.h>

int main(void) {
  int i, v;
  float n, d, calc;
  printf("Digite seu número de identificação: ");
  scanf("%d",&i);

  printf("\n%d digite seu salário fixo: ",i);
  scanf("%f",&n);

  printf("\n%d digite o seu total de vendas: ",i);
  scanf("%d",&v);

  printf("\n%d digite o seu percentual de lucro por venda efetuada: ",i);
  scanf("%f",&d);

  calc = n+(v*(d/100));

  printf("\nO seu salário deu o total de R$%.2f", calc);
  
  return 0;
}