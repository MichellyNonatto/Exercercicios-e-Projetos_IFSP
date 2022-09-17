#include <stdio.h>

int main(void) {
  int n, i;

  do {
    printf("Digite um valor: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
      printf("%dº - %d\n", i, n);
    }
  } while (n < 500);

  return 0;
}