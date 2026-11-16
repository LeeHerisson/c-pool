#include <stdbool.h>
#include <stdio.h>

int main(void) {
  printf("Hello World!\n");

  unsigned char byte = 0;

  printf("byte = %d\n", byte);

  double x = 5.670;
  bool flag = x <= 5.67;
  printf("%d", flag);

  double a, b, c, d, e, f, g, h, i, j;

  scanf("%lf; %lf; %lf; %lf; %lf; %lf; %lf; %lf; %lf; %lf", &a, &b, &c, &d, &e,
        &f, &g, &h, &i, &j);
  printf("%.1lf %.1lf %.1lf %.1lf %.1lf", f, g, h, i, j);

  return 0;
}
