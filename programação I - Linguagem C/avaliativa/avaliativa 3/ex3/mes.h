#define tam 15
typedef struct{
	char nomeMes[tam];
	char abreviacaoMes[4];
	int quantidadeDeDias;
} Mes;

int mesDeEcolha(char nomeMes[tam]);
void diasTotal(int numeroMes, int diaDoMes);
void calendario(int numeroMes);
