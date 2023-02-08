#include <stdio.h>
#include <string.h>
#include <time.h>
#include "mes.h"

Mes indice[12] = {{"janeiro", 31},{"fevereiro", 29},{"março",31},{"abril", 30},{"maio",31},
{"junho",30},{"julho",31},{"agosto",31},{"setembro",30},{"outubro",31},{"novembro",30},{"dezembro",31}}; 
    
    
int mesDeEcolha(char nomeMes[tam]){
	int i, nome;
	for(i=0; i<sizeof(indice); i++){
		nome = strcmp(indice[i].nomeMes, nomeMes);
		if(nome == 0)break;
	}
	if(nome != 0)printf("Mês digitado incorretamente.");
	return i;
}

void diasTotal(int numeroMes){
	int i, somaDias = 0, anoAtual;
	
	//Ano atual do usuário
	time_t data_ano;
	time(&data_ano);
	if(anoAtual%4 != 0)indice[1].quantidadeDeDias--;
	
	struct tm *data = localtime(&data_ano);
	anoAtual = (data->tm_year+1900);  
	
	for(i=0; i<=numeroMes; i++){
		somaDias = somaDias+indice[i].quantidadeDeDias;
	}
	
	printf("\nAté o fim do mês de %s, teremos %d dias.",indice[numeroMes].nomeMes, somaDias);
}
