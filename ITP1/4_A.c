#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("%d ", a / b);
  printf("%d ", a % b);
  printf("%.5f\n", (double)(a) / (double)(b));
}
