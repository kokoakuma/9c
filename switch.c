#include <stdio.h>

int main(void)
{
  int num;
  scanf("%d", &num);
  switch (num) {
    case 1:
      printf("のびた");
      break;
    case 2:
      printf("しずか");
      break;
    case 3:
      printf("スネ夫");
      break;
    case 4:
      printf("たけし");
      break;
    default:
      printf("当てはまる人がいません");
      break;
  }
  return 0;
}