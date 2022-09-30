#include <stdio.h>

int main(void) {
  int var, quant, i = 0;
  float n, total;
  printf("Código - Produto - Preço\n"
         "1 - Café -> R$ 15,00\n"
         "2 - Leite -> R$9,90\n"
         "3 - Pão de forma -> R$ 12,00\n"
         "4 - Sabonete -> R$ 2,00\n"
         "5 - Detergente -> R$ 2,90\n"
         "\n6 - Finalizar pedido\n");

  printf("\nFaça seu pedido, escolha umas das opções acima: ");
  do {
    scanf("%d", &var);

    switch (var) {
    case 1:
      printf("\n-------------------\n"
             "\nQuantidade de café que você irá comprar: ");
      scanf("%d", &quant);
      n = 15 * quant;
      total = total + n;
      printf("\n-------------------\n"
             "\nVocê selecionou %d unidades de café. Valor de R$%.2f\n",
             quant, n);
      n = 0;
      break;

    case 2:
      printf("\nQuantidade de leite que você irá comprar: ");
      scanf("%d", &quant);
      n = 9.90 * quant;
      total = total + n;
      printf("\n-------------------\n"
             "\nVocê selecionou %d unidades de leite. Valor de R$%.2f\n",
             quant, n);
      n = 0;
      break;

    case 3:
      printf("\n-------------------\n"
             "\nQuantidade de pão de forma que você irá comprar: ");
      scanf("%d", &quant);
      n = 12 * quant;
      total = total + n;
      printf("\n-------------------\n"
             "\nVocê selecionou %d unidades de pão de forma. Valor de R$%.2f\n",
             quant, n);
      n = 0;
      break;

    case 4:
      printf("\n-------------------\n"
             "\nQuantidade de sabonete que você irá comprar: ");
      scanf("%d", &quant);
      n = 2 * quant;
      total = total + n;
      printf("\n-------------------\n"
             "\nVocê selecionou %d unidades de sabonete. Valor de R$%.2f\n",
             quant, n);
      n = 0;
      break;

    case 5:
      printf("\nQuantidade de detergente que você irá comprar: ");
      scanf("%d", &quant);
      n = 2.90 * quant;
      total = total + n;
      printf("\n-------------------\n"
             "\nVocê selecionou %d unidades de detergente. Valor de R$%.2f\n",
             quant, n);
      n = 0;
      break;

    case 6:
      var = 6;
      break;
    default:
      printf("\nEscolha invalida, por favor digitar seu pedido novamente!\n"
             "Digite o número do pedido: ");
    }

    if (var <= 5) {
      if (i == 3) {
        printf("\nAdicionado ao pedido\n"
               "\n-------------------\n"
               "Código - Produto - Preço\n"
               "1 - Café -> R$ 15,00\n"
               "2 - Leite -> R$9,90\n"
               "3 - Pão de forma -> R$ 12,00\n"
               "4 - Sabonete -> R$ 2,00\n"
               "5 - Detergente -> R$ 2,90\n"
               "\n6 - Finalizar pedido\n"
               "\n-------------------\n");
        i = 0;
      }
      printf("\nEscolha uma das opções anteriores: ");
      i++;
    }

  } while (var != 6);
  printf("\nPedido finalizado.\n"
         "\nTotal a pagar é de R$%.2f\n",
         total);
  return 0;
}