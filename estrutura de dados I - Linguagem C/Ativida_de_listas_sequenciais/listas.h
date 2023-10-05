#define MAX 10

typedef struct lista{
  int dado[MAX];
  int n; //Quantidade de elementos ou a próxima posição vazia
}Lista;

int inserir(Lista *L, int pos, int valor);
int remover(Lista *L, int pos, int valor);
void listar(Lista *L);
void esvaziar(Lista *L);

int buscaPosicional(Lista *L, int pos);
int modificarValor(Lista *L, int pos, int valor);
int buscaSequencial(Lista *L, int valor);