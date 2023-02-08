#include <stdio.h>

int main(void) {

  int mudar = 0, s, cor = 1, cor2 = 1, tempo = 0;

  for (s = 1; s <= 1000; s++) {
    if (cor == cor2) {
      tempo++;
    }

    if ((s % 48) == 0) { // semáforo 1
      switch (cor2) {
      case 1:
        cor2 = 2;
        break;
      case 2:
        cor2 = 1;
        break;
      }
    }

    if ((s % 10) == 0) { // semáforo 2

      switch (cor) {
      case 1:
        cor = 2;
        break;
      case 2:
        cor = 1;
        break;
      }
    }
  }
  printf("Os semáforos ficaram da mesma cor durante %ds.", tempo);
  return 0;
}

/*

simular dois semáforos

1º muda de cor a cada 10s
2º muda de cor a cada 48s

período de 1000s

quantos s os dois estarão da mesma cor ao mesmo tempo

3 cores r, y, g

*/