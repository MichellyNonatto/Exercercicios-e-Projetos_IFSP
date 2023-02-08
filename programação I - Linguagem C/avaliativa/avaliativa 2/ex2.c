#include <stdio.h>

int main(void) {
  int var, quant;
  float n;
  printf("Código - Produto - Preço\n"
         "1 - Café -> R$ 15,00\n"
         "2 - Leite -> R$9,90\n"
         "3 - Pão de forma -> R$ 12,00\n"
         "4 - Sabonete -> R$ 2,00\n"
         "5 - Detergente -> R$ 2,90\n");

  printf("\nFaça seu pedido, escolha umas das opções acima: ");
  scanf("%d", &var);

  switch (var) {
  case 1:
    printf("\nQuantidade de café que você irá comprar: ");
    scanf("%d", &quant);
    n = 15 * quant;
    printf("\nVocê selecionou %d unidades de café. Valor total de R$%.2f\n", quant,
           n);
    break;
  case 2:
    printf("\nQuantidade de leite que você irá comprar: ");
    scanf("%d", &quant);
    n = 9.90 * quant;
    printf("\nVocê selecionou %d unidades de leite. Valor total de R$%.2f\n", quant,
           n);
    break;
  case 3:
    printf("\nQuantidade de pão de forma que você irá comprar: ");
    scanf("%d", &quant);
    n = 12 * quant;
    printf("\nVocê selecionou %d unidades de pão de forma. Valor total de R$%.2f\n",
           quant, n);
    break;
  case 4:
    printf("\nQuantidade de sabonete que você irá comprar: ");
    scanf("%d", &quant);
    n = 2 * quant;
    printf("\nVocê selecionou %d unidades de sabonete. Valor total de R$%.2f\n",
           quant, n);
    break;
  case 5:
    printf("\nQuantidade de detergente que você irá comprar: ");
    scanf("%d", &quant);
    n = 15 * quant;
    printf("\nVocê selecionou %d unidades de detergente. Valor total de R$%.2f\n",
           quant, n);
    break;
  default:
    printf("\nValor não correspondente.\n");
    break;
  }

  printf("\nFim da execução do programa");
  return 0;
}