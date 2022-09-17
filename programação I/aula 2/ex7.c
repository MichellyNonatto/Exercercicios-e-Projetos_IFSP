#include <stdio.h>

int main(void)
{

    int var[4];

    printf("Digite os valores e vê se entra no critério do algoritmo : ");
    scanf("%d", &var[0]);
    scanf("%d", &var[1]);
    scanf("%d", &var[2]);
    scanf("%d", &var[3]);

    if ((var[0] > var[1]) && (var[2] > var[3]))
    {
        printf("Primeiro critério atendido.");
        int soma1 = var[0] + var[1];
        int soma2 = var[2] + var[3];

        if (soma1 < soma2)
        {
            printf("Todos os critérios atingidos");
        }
        else
        {
            printf("O ultimo critério não foi atingindo.");
        }
    }
    else
    {
        printf("Nenhum critério atendido.");
    }

    return 0;
}