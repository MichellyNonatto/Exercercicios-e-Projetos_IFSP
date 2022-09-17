#include <stdio.h>

int main(void) {

  int escolha;
  float valorFinal = 0;

  printf("Escolha as opções a seguir e faça o seu pedido : \n");
  printf("\n Opção 1 - Sanduíche natural - R$ 5,00 \n Opção 2 - X-salada - R$ 15,00\n Opção 3 - Refrigerante - R$ 3,50\n Opção 4 - Suco - R$ 3,00\n Opção 5 - Sorvete - R$ 9,00\n Opção 6 - Finalizar\n\n");
  scanf("%d", &escolha);

  do {
        
    switch (escolha) {
      int quantidade = 0;
    case 1:
      printf("\nQuantos Sanduíches Naturais você vai querer :\n");
      scanf("%d",&quantidade);
     valorFinal = valorFinal + 5*quantidade;
      break;
    case 2:
            printf("\nQuantos X-Salada você vai querer :\n");
      scanf("%d",&quantidade);
      valorFinal = valorFinal + 15*quantidade;
      break;
    case 3:
            printf("\nQuantos Refrigerante você vai querer :\n");
      scanf("%d",&quantidade);
      valorFinal = valorFinal + 3.50*quantidade;
      break;
    case 4:
            printf("\nQuantos Suco você vai querer :\n");
      scanf("%d",&quantidade);
      valorFinal = valorFinal + 3*quantidade;
      break;
    case 5:
            printf("\nQuantos Sorvete você vai querer :\n");
      scanf("%d",&quantidade);
      valorFinal = valorFinal + 9*quantidade;
      break;
    case 6:
      printf("Pedido finalizado!\n");
      break;
         default:
      printf("escolha o valor conforme o cardápio \n");
    }

    printf("\nEscolha seu pedido ou finalize-o: \n");
    scanf("%d", &escolha);

  } while (escolha < 6 && escolha > 0);
  printf("\nO valor total do seu pedido ficou em R$ %.2f", valorFinal);
  return 0;
}