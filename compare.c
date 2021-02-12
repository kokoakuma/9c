#include <stdio.h>

int main(void)
{
  int age;
  printf("年齢を入力してください：");
  scanf("%d", &age);
  if (age <= 3) {
    printf("幼児は無料です\n");
  } else if (4 <= age && age <= 12 ) {
    printf("子供は250円です\n");
  } else {
    printf("大人は1000円です\n");
  };
  return 0;
}