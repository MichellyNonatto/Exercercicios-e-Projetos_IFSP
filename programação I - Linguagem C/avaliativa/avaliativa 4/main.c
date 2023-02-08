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

  // Inicializando o avião
  leArquivo(aviao);

  do {
    cont++;
    if (cont >= 10) {
      system("clear");
      printf("\n----------------------------------\n");
      printf("Op��es\n");
      printf("1 - Apresenta a ocupa��o do avi�o;\n");
      printf("2 - Reserva lugar por c�digo;\n");
      printf("3 - Procura sequ�ncia de N lugares livres;\n");
      printf("4 - Ajusta pre�o;\n");
      printf("5 - Vende assento pelo c�digo;\n");
      printf("6 - Reserva no fundo;\n");
      printf("7 - Reserva no meio;\n");
      printf("8 - Reserva na frente;\n");
      printf("9 - Cancela reserva por c�digo;\n");
      printf("10 - Finaliza;\n");
      cont = 0;
    }

    printf("\nEntre com sua op��o: ");
    scanf("%d", &op);

    switch (op) {
    case 1:
      printf(
          "\nTemos o total de %.2f porcento de poltronas ocupadas neste voo.\n",
          ocupacao(aviao));
      break;

    case 2:
      printf("\nDigite o c�digo do assento para fazer a reserva");
      printf(": ");
      scanf("%s", codigoAssento);

      if (codigoAssento[strlen(codigoAssento) - 1] == '\n')
        codigoAssento[strlen(codigoAssento) - 1] = '\0';

      res = reservaLugar(aviao, codigoAssento);
      if (res == 0)
        printf("Assento reservado com sucesso.\n");
      else if (res == 1)
        printf("Assento j� oculpado.\n");
      else
        printf("N�mero do assento incorreto!\n");
      break;

    case 3:
      printf("Digite a quantidade sequ�ncial de cadeiras que voc� quer reservar: ");
      scanf("%d", &quant);
      if (quant <= COL)
        sequenciaLugares(aviao, quant);
      else
        printf("Quantidade maior do que a de assentos dispon�veis por fileira.\n");
      break;

    case 4:
      printf("O valor da passagem se encontra em: R$%.2f\n",  ajustaPreco(aviao));
      break;

    case 5:
      printf("\nDigite o c�digo do assento para fazer a compra");
      printf(": ");
      scanf("%s", codigoAssento);
      quant = vendeAssento(aviao, codigoAssento);
      if (quant == 0)
        printf("Assento j� foi comprado.\n");
      if (quant == 2)
        printf("N�mero do assento incorreto!\n");
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
      printf("Digite o c�digo do seu assento para cancelar a reserva\n: ");
      scanf("%s", codigoAssento);
      if (cancelaReserva(aviao, codigoAssento) == 0)
        printf("Cancelamento da reserva feita com sucesso.\n");
      else if (cancelaReserva(aviao, codigoAssento) == -1)
        printf("Esse assento j� foi comprado.\n");
      else
        printf("C�digo do assento inv�lido.\n");
      break;

    case 10:
      printf("Finalizando...\n\n");
      if(registraAviao(aviao)==0)  printf("Modifica��es salvas com sucesso.");
      else printf("Ouve algum problema no arquivo, suas modifica��es n�o foram salvas.");
      break;

    default:
      printf("\n\nOp��o inv�lida.\n\n");
      if (!fgets(tmp, sizeof tmp, stdin))
        if (sscanf(tmp, "%d", &op) != 1)
          break;
    }
  } while (op != 10);
  
  return 0;
}
