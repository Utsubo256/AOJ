#include <stdio.h>
#include <math.h>

int main(void) {
  double PI = 3.141592653589793238;
  double r;
  scanf("%lf", &r);

  printf("%.6lf %.6lf\n", pow(r, 2) * PI, r * 2 * PI);
}
