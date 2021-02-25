#include <stdio.h>

int main(void)
{
  double s;
  int r;

  do {
    printf("半径は？：");
    scanf("%d", &r);
  } while (r < 0);
  s = r * r * 3.14;
  printf("面積は%f", s);
  return 0;
}