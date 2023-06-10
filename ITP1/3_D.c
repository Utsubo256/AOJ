#include <stdio.h>

int main(void) {
  int a, b, c, i, counter = 0;

  scanf("%d %d %d", &a, &b, &c);

  for (i = a; i < b+1; i++) {
    if (c % i == 0) counter++;
  }
  printf("%d\n", counter);
}
