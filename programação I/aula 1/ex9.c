#include <stdio.h>

int main(void){
  float n, calc, area;
  printf("Escreva o valor da área em m²: ");
  scanf("%f",&n);
  
  area = n/0.25;
  calc = area*7;
  
  printf("\nVocê precisará de:\n"
    "%.0f peças\n"
    "\nO preço final será de R$%.2f",area,calc);
  return 0;
}