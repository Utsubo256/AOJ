#include <stdio.h>

int main(void) {
  int a, b, tmp;

  while (1) {
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0) break;
    if (a > b) {
      tmp = b;
      b = a;
      a = tmp;
    }
    printf("%d %d\n", a, b);
  }
}
