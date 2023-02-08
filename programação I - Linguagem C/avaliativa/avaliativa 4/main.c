#include "funcoesAereas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
  assento aviao[LIN][COL];
  int op = 0, cont = 10, res = -1, quant;
  char codigoAssento[COD], tmp[20];

  // Inicializando o aviÃ£o
  leArquivo(aviao);

  do {
    cont++;
    if (cont >= 10) {
      system("clear");
      printf("\n----------------------------------\n");
      printf("Opções\n");
      printf("1 - Apresenta a ocupação do avião;\n");
      printf("2 - Reserva lugar por código;\n");
      printf("3 - Procura sequência de N lugares livres;\n");
      printf("4 - Ajusta preço;\n");
      printf("5 - Vende assento pelo código;\n");
      printf("6 - Reserva no fundo;\n");
      printf("7 - Reserva no meio;\n");
      printf("8 - Reserva na frente;\n");
      printf("9 - Cancela reserva por código;\n");
      printf("10 - Finaliza;\n");
      cont = 0;
    }

    printf("\nEntre com sua opção: ");
    scanf("%d", &op);

    switch (op) {
    case 1:
      printf(
          "\nTemos o total de %.2f porcento de poltronas ocupadas neste voo.\n",
          ocupacao(aviao));
      break;

    case 2:
      printf("\nDigite o código do assento para fazer a reserva");
      printf(": ");
      scanf("%s", codigoAssento);

      if (codigoAssento[strlen(codigoAssento) - 1] == '\n')
        codigoAssento[strlen(codigoAssento) - 1] = '\0';

      res = reservaLugar(aviao, codigoAssento);
      if (res == 0)
        printf("Assento reservado com sucesso.\n");
      else if (res == 1)
        printf("Assento já oculpado.\n");
      else
        printf("Número do assento incorreto!\n");
      break;

    case 3:
      printf("Digite a quantidade sequêncial de cadeiras que você quer reservar: ");
      scanf("%d", &quant);
      if (quant <= COL)
        sequenciaLugares(aviao, quant);
      else
        printf("Quantidade maior do que a de assentos disponíveis por fileira.\n");
      break;

    case 4:
      printf("O valor da passagem se encontra em: R$%.2f\n",  ajustaPreco(aviao));
      break;

    case 5:
      printf("\nDigite o código do assento para fazer a compra");
      printf(": ");
      scanf("%s", codigoAssento);
      quant = vendeAssento(aviao, codigoAssento);
      if (quant == 0)
        printf("Assento já foi comprado.\n");
      if (quant == 2)
        printf("Número do assento incorreto!\n");
      else
        printf("Assento comprado no valor de R$%.2f.\n", ajustaPreco(aviao));
      break;

    case 6:
      reservaNoFundo(aviao);
      break;

    case 7:
      reservaNoMeio(aviao);
      break;

    case 8:
      reservaNaFrente(aviao);
      break;

    case 9:
      printf("Digite o código do seu assento para cancelar a reserva\n: ");
      scanf("%s", codigoAssento);
      if (cancelaReserva(aviao, codigoAssento) == 0)
        printf("Cancelamento da reserva feita com sucesso.\n");
      else if (cancelaReserva(aviao, codigoAssento) == -1)
        printf("Esse assento já foi comprado.\n");
      else
        printf("Código do assento inválido.\n");
      break;

    case 10:
      printf("Finalizando...\n\n");
      if(registraAviao(aviao)==0)  printf("Modificações salvas com sucesso.");
      else printf("Ouve algum problema no arquivo, suas modificações não foram salvas.");
      break;

    default:
      printf("\n\nOpção inválida.\n\n");
      if (!fgets(tmp, sizeof tmp, stdin))
        if (sscanf(tmp, "%d", &op) != 1)
          break;
    }
  } while (op != 10);
  
  return 0;
}
