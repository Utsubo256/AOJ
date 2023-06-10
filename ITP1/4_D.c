#include <stdio.h>

int main(void) {
  int n, i, a;
  long long min, max, sum;

  scanf("%d", &n);
  scanf("%d", &a);
  max = min = sum = a;

  for (i = 1; i < n; i++) {
    scanf("%d", &a);
    if (a > max) max = a;
    if (a < min) min = a;
    sum += a;
  }
  printf("%lld %lld %lld\n", min, max, sum);
}
