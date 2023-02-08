#include "funcoesAereas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que lêr o arquivo com a situação inicial do avião
void leArquivo(assento aviao[][COL]) {
  int i, j;
  FILE *arq;
  arq = fopen("situacaoInicial.log", "r");

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      fgets(aviao[i][j].cod, sizeof(aviao[i][j].cod), arq);
      fscanf(arq, "%d\n", &aviao[i][j].estado);
      fscanf(arq, "%f\n", &aviao[i][j].valor);
    }
  }

  fclose(arq);
}

// Estado de ocupação do avião
float ocupacao(assento aviao[][COL]) {
  float porcentagem, var = 0;
  int i, j;

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      if (aviao[i][j].estado == 1 || aviao[i][j].estado == -1) {
        var++;
      }
    }
  }

  porcentagem = (var / (COL * LIN)) * 100;
printf("%f",porcentagem);
  return porcentagem;
}

// Reserva do assento
int reservaLugar(assento aviao[][COL], char cod[COD]) {
  int i, j, igualdade;

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      igualdade = strcmp(cod, aviao[i][j].cod);
      if (igualdade == 0 && aviao[i][j].estado == -1 ||
          aviao[i][j].estado == 1) {
        igualdade = 1;
        i = LIN;
        j = COL;
        break;
      } else if (igualdade == 0) {
        aviao[i][j].estado = -1;
        i = LIN;
        j = COL;
        break;
      } else
        igualdade = 2;
    }
  }
  return igualdade;
}

// Lugares Sequênciais - por coluna/fileira
void sequenciaLugares(assento aviao[][COL], int qtdade) {
  int i, j, fileira;

  for (i = 0; i < LIN; i++) {
    fileira = 0;
    for (j = 0; j < COL; j++) {
      if (aviao[i][j].estado == 0) {
        fileira++;
        if (fileira >= qtdade) {
          printf("\nA fileira %d obtém o total de %d assentos vazios.\n", i + 1,
                 fileira);
          printf("Ela está¡ localizada a partir do assento %s.\n",
                 aviao[i][j - (qtdade - 1)].cod);
          i = LIN;
          j = COL;
          break;
        }
      } else
        fileira = 0;
    }
  }
  if (fileira < qtdade)
    printf("Não há assentos %d sequÃªncialmente livres.\n", qtdade);
}

// Ajustar preÃ§o do assento
float ajustaPreco(assento aviao[][COL]) {
  int i, j;
  float oc = ocupacao(aviao), valor= aviao[i][j].valor;

  if (oc >= 85) {
        valor = valor+(0.3*valor);
  } else if (oc <= 25) {
       valor = valor-(0.05*valor);
    }else {
    valor = aviao[0][0].valor;
  }
  return valor;
}

// Venda de assentos
int vendeAssento(assento aviao[][COL], char cod[4]) {
  int i, j, comp = 2, igualdade;

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      igualdade = strcmp(aviao[i][j].cod, cod);
      if (igualdade == 0) {
        aviao[i][j].valor = ajustaPreco(aviao);
        if (aviao[i][j].estado == 0 || aviao[i][j].estado == -1) {
          aviao[i][j].estado = 1;
          ;
          comp = 1;
        } else
          comp = 0;
      }
    }
  }
  return comp;
}

// Reservas
void reservaNoFundo(assento aviao[][COL]) {
  int i, j;
  float div;

  div = LIN / 4;

  for (i = (div * 3); i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      if (aviao[i][j].estado == 0) {
        aviao[i][j].estado = -1;
        printf("Assento ao fundo reservado.\nCódigo do assento é: %s\n",
               aviao[i][j].cod);
        i = LIN;
        break;
      }
    }
  }
  if (i <= LIN)
    printf("Não há possições livres no fundo\n");
}

void reservaNoMeio(assento aviao[][COL]) {
  int i, j;
  float div;

  div = LIN / 3;

  for (i = (div * 2); i < (div * 3); i++) {
    for (j = 0; j < COL; j++) {
      if (aviao[i][j].estado == 0) {
        aviao[i][j].estado = -1;
        printf("Assento ao meio reservado.\nCódigo do assento é: %s\n",
               aviao[i][j].cod);
        i = LIN;
        break;
      }
    }
  }
  if (i <= (div * 3))
    printf("Não há possições livres no meio\n");
}

void reservaNaFrente(assento aviao[][COL]) {
  int i, j;
  float div;

  div = LIN / 4;

  for (i = 0; i < (div * 2); i++) {
    for (j = 0; j < COL; j++) {
      if (aviao[i][j].estado == 0) {
        aviao[i][j].estado = -1;
        printf("Assento na frente reservado.Código do assento é: %s\n",
               aviao[i][j].cod);
        i = LIN;
        break;
      }
    }
  }

  if (i <= (div * 2))
    printf("Não há possições livres na frente\n");
}

int cancelaReserva(assento aviao[][COL], char cod[4]) {
  int i, j, igualdade, v;

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      igualdade = strcmp(aviao[i][j].cod, cod);
      if (igualdade == 0 && aviao[i][j].estado == -1) {
        aviao[i][j].estado = 0;
        v = 0;
        i = LIN;
        break;
      } else if (aviao[i][j].estado == 1 && igualdade == 0) {
        v = -1;
        i = LIN;
        break;
      } else
        v = 1;
    }
  }
  return v;
}

int registraAviao(assento aviao[][COL]) {
  FILE *arq;
  int i, j;

  if ((arq = fopen("aviao.log", "w")) == NULL) {
    printf("falha ao abrir  programa!");
    i=LIN;
  }

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      fprintf(arq, "%s\t", aviao[i][j].cod);
      fprintf(arq, "%d\t", aviao[i][j].estado);
      fprintf(arq, "R$%.2f\t", aviao[i][j].valor);
      fputc('\n', arq);
    }
    fputc('\n', arq);
  }

  fclose(arq);
  return 0;
}
