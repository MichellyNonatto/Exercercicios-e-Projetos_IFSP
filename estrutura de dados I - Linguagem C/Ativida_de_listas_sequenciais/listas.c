#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int inserir(Lista *L, int pos, int valor){
  //Testa se lista cheia ou posição inválida
  if((L->n == MAX) || (pos > L-> n+1) || (pos <= 0)){
    return 0;
  } 
  
  for(int i=L->n-1;i>=pos-1;i--){
    L->dado[i+1] = L->dado[i];  
  }
  L->dado[pos-1] = valor;
  (L->n)++;
  return 1;
}

int remover(Lista *L, int pos, int valor){
  if((pos > L->n) || (pos < 1)){
    return 0;
  } 
  
  if(L->dado[pos-1] == valor){
    for(int i=pos-1; i< L->n ;i++){
      L->dado[i] = L->dado[i+1];
    }
    (L->n)--;
    return 1;
  }
  return 0;
}

void listar(Lista *L){
    if(L->n==0){
      printf("\nLISTA VAZIA!");
    }else{
      printf("\nLISTA: ");
      for(int i=0; i<L->n; i++)
      {
        printf("[%d] ",L->dado[i]);
      } 
    }
}

void esvaziar(Lista *L){
  L->n=0; //Lista Vazia
}

int buscaPosicional(Lista *L, int pos){
  if((pos > L->n) || (pos < 1)){
    return 0;
  }
    else{
      return L -> dado[pos - 1];
    }
}

int modificarValor(Lista *L, int pos, int valor){
  int validarPosicao = buscaPosicional(L, pos);
  
  if(!validarPosicao) return 0;
  
  L -> dado[pos - 1] = valor;
  return 1;
  
}

int buscaSequencial(Lista *L, int valor){
  for(int i = 0; i < L -> n; i++){
    if(valor == L -> dado[i]){
      return i+1;
    }
  }
  return -1;
}
