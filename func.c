#include <stdio.h>

int calc_olympic(int year); /* プロトタイプ宣言 */

int main(void)
{
  int year;
  int answer;
  scanf("%d", &year);
  answer = calc_olympic(year);
  if (answer) {
    printf("olympic year!!");
  } else {
    printf("not olympic year...");
  }
  return 0;
}

int calc_olympic(int year)
{
  int is_olympic_held;
  is_olympic_held = 0;
  if (year >= 2000 && year % 4 == 0) {
    is_olympic_held = 1;
  }
  return is_olympic_held;
}