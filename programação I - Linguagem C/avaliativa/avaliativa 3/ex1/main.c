/*
Escreva um programa que utilize uma estrutura que descreva os meses.
A estrutura deve ser capaz de armazenar o nome do mês, a abreviação de três
letras e o número de dias do mês. O programa recebe as informações dos meses e apresenta na tela. 
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "mes.h"



int main(void){
	char vetor[tam];
	setlocale (LC_ALL, "portuguese");
	
	//título
	printf("-----------------------------------------\n");
	printf("\t\tCalendário\t\t");
	printf("\n-----------------------------------------\n");
	
	//valor inserido pelo usuário
	printf("Escreva o nome ou a abreviação do mês de escolha\n: ");
	fgets(vetor, sizeof(vetor), stdin);
	if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
	calendario(mesDeEcolha(vetor));
	
	
	return 0;
}
