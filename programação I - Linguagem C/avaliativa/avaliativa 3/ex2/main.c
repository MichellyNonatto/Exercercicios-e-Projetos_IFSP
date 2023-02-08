/*
Crie um programa que receba um n�mero de 1 a 12 e retorne o total de
dias do ano at� aquele m�s. Utilize um vetor de estruturas como a do
Exerc�cio 1. Esse vetor pode j� estar preenchido com os valores adequados
direto no seu c�digo. 
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "mes.h"

int main(void){
	setlocale (LC_ALL, "portuguese");
		
	char vetor[tam];
	int anoAtual;
	

	//t�tulo
	printf("-----------------------------------------\n");
	printf("\t\tCalend�rio\t\t");
	printf("\n-----------------------------------------\n");
	

	
	//valor inserido pelo usu�rio
	printf("Escreva o nome ou a abrevia��o do m�s de escolha\n: ");
	fgets(vetor, sizeof(vetor), stdin);
	if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
	
	diasTotal(mesDeEcolha(vetor));
		
	return 0;
}

