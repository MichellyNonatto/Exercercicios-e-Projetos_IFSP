#include <stdio.h>

int main(void) {
  int n, i, x;

  do {
    printf("\nDigite um valor entre 2 e 9: \n");
    scanf("%d", &n);

    for (i = 2; i <= 9; i++) {
      x = i * n;
      printf("\n %d X %d = %d\n", n, i, x);
    }

  } while ((n >= 1) && (n < 10));
  return 0;
}