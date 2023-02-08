#include <stdio.h>
#include <string.h>
#include "mes.h"

Mes indice[12] = {{"janeiro", "jan", 31},{"fevereiro", "fev", 29},{"março","mar",31},{"abril","abr", 30},{"maio","mar",31},
{"junho", "jun",30},{"julho","jul",31},{"agosto","ago",31},{"setembro","set",30},{"outubro","out",31},{"novembro","nov",30},{"dezembro","dez",31}};

int mesDeEcolha(char nomeMes[tam]){
	int i, nome, abreviacao, m;
	for(i=0; i<sizeof(indice); i++){
		nome = strcmp(indice[i].nomeMes, nomeMes);
		abreviacao = strcmp(indice[i].abreviacaoMes, nomeMes);
		if(nome == 0 || abreviacao == 0)break;
	}
	return i;
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
	
	//Dias do mês
	for(i=1; i<=indice[numeroMes].quantidadeDeDias;i++){
		printf("%d\t",i);
		j++;
		if(j == 8){
			printf("\n");
			j=1;
		}
	}
}
