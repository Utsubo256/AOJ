#include <stdio.h>

int main(void) {
  int n, i;

  for (i = 1; ; i++) {
    scanf("%d", &n);
    if (n == 0) break;
    printf("Case %d: %d\n", i, n);
  }
}
