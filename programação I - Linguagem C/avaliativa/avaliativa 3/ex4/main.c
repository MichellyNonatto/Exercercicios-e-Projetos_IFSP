/*
Escreva um programa, utilizando as estruturas dos Exercícios 1, 2 e 3,
que receba o valor de um dia e o valor de um mês (nome, valor ou
abreviação). O programa imprime o total de dias desde 1º de janeiro até o dia
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
	

	//título
	printf("-----------------------------------------\n");
	printf("\t\tCalendário\t\t");
	printf("\n-----------------------------------------\n");
	

	
	//valor inserido pelo usuário	
	printf("Escreva o nome ou a abreviação do mês de escolha \n: ");
	fgets(vetor, sizeof(vetor), stdin);
	if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
	
	m= mesDeEcolha(vetor);	
	
	while(m == -1){
		if(m == -1)	printf("Mês inválido, por favor corrija o erro!\n");
		
		printf(": ");
		fgets(vetor, sizeof(vetor), stdin);
		if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
		
		m = mesDeEcolha(vetor);
	}
	
	do{
	printf("Digite um dia do mês: ");
	scanf("%d", &dia);
	
	 if(dia <= 31)diasTotal(m, dia);
	 else printf("Dia inválido, por favor corrija o erro.\n");
	}while(dia > 31);
	
	printf("\n\n");
	calendario(m);
		
	return 0;
}

