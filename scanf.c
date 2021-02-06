#include <stdio.h>

int main (void)
{
  int min, max, sum, price;
  printf("最小値と最大値を,で区切って入力してください：");
  scanf("%d, %d", &min, &max);
  sum = (min + max) * (max - min + 1) / 2;
  printf("%d~%dまでの合計は%dです。\n", min, max, sum);
  printf("金額を入力してください：");
  scanf("%d", &price);
  printf("一割引きだと%d円\n", (int)(price * 0.9));
  printf("三割引きだと%d円\n", (int)(price * 0.7));
  return 0;
}