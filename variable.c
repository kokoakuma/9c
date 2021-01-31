#include <stdio.h>

int main(void)
{
  double left, right, pi;
  int water = 198, milk = 138;
  int a = 10000, b = 500, c = 3;
  left = 10;
  right = 3;
  pi = 3.14159265358979;
  printf("%f\n", left + right);
  printf("%f\n", left - right);
  printf("%f\n", left * right);
  printf("%f\n", left / right);
  printf("%f\n", 1.03 * 9);
  printf("%d\n", (int)(1.05 * 360));
  printf("Aは%05dです\n", a);
  printf("Bは%05dです\n", b);
  printf("Cは%05dです\n", c);
  printf("%6.2f\n", pi);
  printf("%d\n", (int)(1000 - (water + milk * 2) * 1.05));
  return 0;
}