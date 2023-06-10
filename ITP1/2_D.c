#include <stdio.h>

int main(void) {
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  if (y >= r && y <= (H - r) && x >= r && x <= (W - r)) printf("Yes\n");
  else printf("No\n");

  return 0;
}
