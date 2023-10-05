#include <stdio.h>
#include <stdlib.h>

#include "listas.h"

int main(void) {
  Lista N;
  int opc,p,v;
  esvaziar(&N);
  while(1){
    printf("\n\n===== LISTA SEQUENCIAL ======\n");
    listar(&N);
    do{
      printf("\n\nTerminar programa[0]\n\nInserir[1]\nRemover[2]\n\nBuscar pela posição[3]\nModificar Valor[4]\nBusca Sequêncial[5]\n--> ");
      scanf("%d",&opc);     
      system("clear");
    }while(opc<=0 && opc>=3);

    switch(opc){
      case 0:
        printf("\nPrograma finalizado.");
        return 0;
      case 1:
        printf("\nQual posição? ---> ");
        scanf("%d",&p);
        printf("\nQual valor? ----> ");
        scanf("%d",&v);
        if(!inserir(&N, p, v)){
          printf("\nLista cheia ou posição inválida!");
        } 
      break;
      case 2:
        printf("\nQual posição? ---> ");
        scanf("%d",&p);
        printf("\nQual valor? ----> ");
        scanf("%d",&v);
        if(!remover(&N, p, v)){
          printf("\nValor não está na posição ou posição inválida!");
        }
        break;
      case 3:
        printf("\nQual posição? ---> ");
        scanf("%d",&p);
        int valor = buscaPosicional(&N, p);
        if(!valor){
            printf("\nPosição inválida!");
        }
        else{
            printf("\nValor da posição %d é: %d", p, valor);
        }
        break;
      case 4:
        printf("\nQual posição? --> ");
        scanf("%d",&p);
        printf("\nQual é o novo valor? ----> ");
        scanf("%d",&v);
        if(!modificarValor(&N, p, v)){
          printf("\nPosição inválida!");
        }
      break;
      case 5:
        printf("Qual é o valor> ---> ");
        scanf("%d", &p);
        valor = buscaSequencial(&N, p);
        if(valor == -1){
           printf("\nValor não encontrado!");
        } else{
          printf("\nA posição do valor %d é: %d", p, valor);
        }
      break;
    } 
  }
  return 0;
}