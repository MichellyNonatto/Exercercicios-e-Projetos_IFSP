#include <stdio.h>
#include <string.h>
#define tam 10
int main(void) {
  int n, p, caraterMax, i, j;
  char s[tam], c;

  printf("Digite até %d caracter: ", tam - 1);
  fgets(s, sizeof(s), stdin);
  caraterMax = strlen(s);
  if (s[caraterMax - 1] == '\n')
    s[caraterMax - 1] = '\0';

  printf("Digite 1 caracter: ");
  scanf("%c", &c);

  do {
    printf("\n");
    printf("Digite o valor de p: ");
    scanf("%d", &p);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    if(p > n)printf("n tem que ser maior que p\n");
  } while (p > n);

  for (i = 0; i < tam; i++) {
    
    if (i == p) {
      
      for (j = i; j <= n; j++) {
        s[j] = c;
      }
      
    }
    
  }
  printf("\n%s", s);
  return 0;
}