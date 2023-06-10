#include <stdio.h>

int main(void) {
  int a, b, c;
  int tmp;
  scanf("%d %d %d", &a, &b, &c);

  // aとbを比較
  if (a > b) {
    tmp = b;
    b = a;
    a = tmp;
  }

  // aとcを比較
  if (a > c) {
    tmp = c;
    c = a;
    a = tmp;
  }

  // bとcを比較
  if (b > c) {
    tmp = c;
    c = b;
    b = tmp;
  }

  printf("%d %d %d\n", a, b, c);
  return 0;
}
