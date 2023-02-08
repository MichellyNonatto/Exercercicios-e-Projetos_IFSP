/*
Escreva um programa, utilizando as estruturas dos Exerc�cios 1, 2 e 3,
que receba o valor de um dia e o valor de um m�s (nome, valor ou
abrevia��o). O programa imprime o total de dias desde 1� de janeiro at� o dia
informado. 
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "mes.h"

int main(void){
	setlocale (LC_ALL, "portuguese");
		
	char vetor[tam];
	int anoAtual, m, dia;
	

	//t�tulo
	printf("-----------------------------------------\n");
	printf("\t\tCalend�rio\t\t");
	printf("\n-----------------------------------------\n");
	

	
	//valor inserido pelo usu�rio	
	printf("Escreva o nome ou a abrevia��o do m�s de escolha \n: ");
	fgets(vetor, sizeof(vetor), stdin);
	if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
	
	m= mesDeEcolha(vetor);	
	
	while(m == -1){
		if(m == -1)	printf("M�s inv�lido, por favor corrija o erro!\n");
		
		printf(": ");
		fgets(vetor, sizeof(vetor), stdin);
		if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
		
		m = mesDeEcolha(vetor);
	}
	
	do{
	printf("Digite um dia do m�s: ");
	scanf("%d", &dia);
	
	 if(dia <= 31)diasTotal(m, dia);
	 else printf("Dia inv�lido, por favor corrija o erro.\n");
	}while(dia > 31);
	
	printf("\n\n");
	calendario(m);
		
	return 0;
}

