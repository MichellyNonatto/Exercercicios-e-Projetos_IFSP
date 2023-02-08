#include <stdio.h>

int main(void) {

  int n, i;
  printf("digite um valor positivo: ");
  scanf("%d", &n);

  if (n > 0) {
    for (i = 0; i < n; i++) {
      printf("%d\n", n);
    }
  }
  return 0;
}