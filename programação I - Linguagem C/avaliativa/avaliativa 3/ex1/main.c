/*
Escreva um programa que utilize uma estrutura que descreva os meses.
A estrutura deve ser capaz de armazenar o nome do m�s, a abrevia��o de tr�s
letras e o n�mero de dias do m�s. O programa recebe as informa��es dos meses e apresenta na tela. 
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "mes.h"



int main(void){
	char vetor[tam];
	setlocale (LC_ALL, "portuguese");
	
	//t�tulo
	printf("-----------------------------------------\n");
	printf("\t\tCalend�rio\t\t");
	printf("\n-----------------------------------------\n");
	
	//valor inserido pelo usu�rio
	printf("Escreva o nome ou a abrevia��o do m�s de escolha\n: ");
	fgets(vetor, sizeof(vetor), stdin);
	if(vetor[strlen(vetor)-1] == '\n')vetor[strlen(vetor)-1] = '\0';
	calendario(mesDeEcolha(vetor));
	
	
	return 0;
}
