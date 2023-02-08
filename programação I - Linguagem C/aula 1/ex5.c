#include <stdio.h>

int main(void)
{
    float calc = 0, n;

    printf("Escreva um valor (1/5): ");
    scanf("%f", &n);
    calc = calc + n;
    printf("Escreva um valor (2/5): ");
    scanf("%f", &n);
    calc = calc + n;
    printf("Escreva um valor (3/5): ");
    scanf("%f", &n);
    calc = calc + n;
    printf("Escreva um valor (4/5): ");
    scanf("%f", &n);
    calc = calc + n;
    printf("Escreva um valor (5/5): ");
    scanf("%f", &n);
    calc = calc + n;

    calc = calc / 5;

    printf("A média desse valores é de %.2f", calc);
    return 0;
}