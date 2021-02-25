#include <stdio.h>

int countFn(void);
int count = 0;

int main(void)
{
  countFn();
  countFn();
  countFn();
  return 0;
}

int countFn(void)
{
  count++;
  printf("%d\n", count);
  return 0;
}