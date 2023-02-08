#include <stdio.h>

int main(void) {

  int n, escolha, i;

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
        printf("\nOrdem crescente: ");
        for (i = 0; i <= n; i++) {
          printf("%d ", i);
        }
        break;
      case 2:
        printf("\nOrdem decrescente: ");
        for (i = n; i > 0; i--) {
          printf("%d ", i);
        }
        break;
      case 3:
        printf("\n Só valores pares: ");
        for (i = 0; i <= n; i++) {
          if ((i % 2) == 0)
            printf("%d ", i);
        }
        break;
      case 4:
        printf("\n Só valores impares: ");
        for (i = 0; i <= n; i++) {
          if ((i % 2) == 1)
            printf("%d ", i);
        }
        break;
      case 5:
        printf("Fim da execução do programa.");
        n = 0;
        break;
      default:
        printf("Digite um valor entre 1 e 5");
      }
    }

    if (n < 0)
      printf("Valor inválido\n");
  } while (escolha != 5);

  return 0;
}