/*
Crie um programa que receba um número de 1 a 12 e retorne o total de
dias do ano até aquele mês. Utilize um vetor de estruturas como a do
Exercício 1. Esse vetor pode já estar preenchido com os valores adequados
direto no seu código. 
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "mes.h"

int main(void){
	setlocale (LC_ALL, "portuguese");
		
	char vetor[tam];
	int anoAtual;
	

	//título
	printf("-----------------------------------------\n");
	printf("\t\tCalendário\t\t");
	printf("\n-----------------------------------------\n");
	

	
	//valor inserido pelo usuário
	printf("Escreva o nome ou a abreviação do mês de escolha\n: ");
	fgets(vetor, sizeof(vetor), stdin);
	if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
	
	diasTotal(mesDeEcolha(vetor));
		
	return 0;
}

