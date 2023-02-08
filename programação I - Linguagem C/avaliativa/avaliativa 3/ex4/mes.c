#include <stdio.h>
#include <string.h>
#include <time.h>
#include "mes.h"

Mes indice[12] = {{"janeiro", "jan", 31},{"fevereiro", "fev", 29},{"março","mar",31},{"abril","abr", 30},{"maio","mar",31},
{"junho", "jun",30},{"julho","jul",31},{"agosto","ago",31},{"setembro","set",30},{"outubro","out",31},{"novembro","nov",30},{"dezembro","dez",31}}; 
    
    
int mesDeEcolha(char nomeMes[tam]){
	int i, nome, abreviacao, m = -1;
	
	for(i=0; i<sizeof(indice); i++){
		nome = strcmp(indice[i].nomeMes, nomeMes);
		abreviacao = strcmp(indice[i].abreviacaoMes, nomeMes);
		if(nome == 0 || abreviacao == 0)break;
	}
	
	if(nome != 0 && abreviacao != 0)return m;
	return i;
}

void diasTotal(int numeroMes, int diaDoMes){
	int i, somaDias = 0, anoAtual, subtracaoDias;
	
	//Ano atual do usuário
	time_t data_ano;
	time(&data_ano);
	struct tm *data = localtime(&data_ano);
	anoAtual = (data->tm_year+1900);  
	
	if(anoAtual%4 != 0)indice[1].quantidadeDeDias--;
	
	if(numeroMes == 1){
		diaDoMes = 29;
		if(anoAtual%4 != 0)  diaDoMes--;
	}else if(diaDoMes > indice[numeroMes].quantidadeDeDias) diaDoMes--;
		
	for(i=0; i<= numeroMes; i++){
		somaDias = somaDias+indice[i].quantidadeDeDias;
	}
	
	subtracaoDias = indice[numeroMes].quantidadeDeDias - diaDoMes;
	somaDias = somaDias - subtracaoDias;
	
	printf("O ano atual é: %d\n", anoAtual);
	
	printf("\nAté o dia de escolha do mês de %s, teremos %d dias.",indice[numeroMes].nomeMes, somaDias);
}

void calendario(int numeroMes){
	char nomeDaSemana[7][4] = {{"dom"},{"seg"},{"ter"},{"qua"},{"qui"},{"sex"},{"sab"}};
	int i, j=1;
	
	printf("Mês de: %s\n",indice[numeroMes].nomeMes);
	
	//Dia da semana
	for(i = 0; i < 7; i++){
		printf("%s\t",nomeDaSemana[i]);
	}
	
	printf("\n");
	
	//Dias do m?s
	for(i=1; i<=indice[numeroMes].quantidadeDeDias;i++){
		printf("%d\t",i);
		j++;
		if(j == 8){
			printf("\n");
			j=1;
		}
	}
}
