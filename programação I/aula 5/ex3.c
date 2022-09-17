#include <stdio.h>

int main(void) {

  int n, escolha, i, quant[4];

  quant[0] = 0;
  quant[1] = 0;
  quant[2] = 0;
  quant[3] = 0;

  do {
    printf("\nDigite um valor maior que 0 : ");
    scanf("%d", &n);

    while (n > 0) {
      printf("\n\nDigite as seguintes opções : \n");
      printf("\n 1 - Ordem crescente\n 2 - Ordem decrescente\n 3 - Só valores "
             "pares\n 4 - Só valores ímpares\n 5 - Finalizar : ");

      scanf("%d", &escolha);

      switch (escolha) {
      case 1:
        quant[0] = quant[0] + 1;
        printf("\nOrdem crescente: ");
        for (i = 0; i <= n; i++) {
          printf("%d ", i);
        }
        break;
      case 2:
        quant[1] = quant[1] + 1;
        printf("\nOrdem decrescente: ");
        for (i = n; i > 0; i--) {
          printf("%d ", i);
        }
        break;
      case 3:
        quant[2] = quant[2] + 1;
        printf("\n Só valores pares: ");
        for (i = 0; i <= n; i++) {
          if ((i % 2) == 0)
            printf("%d ", i);
        }
        break;
      case 4:
        quant[3] = quant[3] + 1;
        printf("\n Só valores impares: ");
        for (i = 0; i <= n; i++) {
          if ((i % 2) == 1)
            printf("%d ", i);
        }
        break;
      case 5:
        printf("Fim da execução do programa.\n");
        n = 0;
        break;
      default:
        printf("Digite um valor entre 1 e 5");
      }
    }

    if (n < 0)
      printf("Valor inválido\n");
  } while (escolha != 5);

  printf("\nVocê escolheu\n a opção 1: %d vezes,\n opção 2: %d vezes,\n opção 3: %d vezes\n e a opção 4: %d vezes",quant[0], quant[1], quant[2], quant[3]);

  return 0;
}