#include<stdio.h>

int main(void)
{
  int i = 2;
  char ope; //演算子を識別するため
  float x, y; //数字を入力する 小数点対応させるのなら 

  printf("%d", i);

  printf("数字を入力してください:");
  scanf("%f", &x);  // 数字以外を入力すると意味不明な数字が入る

  printf("演算子を入力してください:");
  scanf("%c", &ope);  // 数字以外を入力すると意味不明な数字が入る

  printf("もう一つ");
  scanf("%f", &y);  // 数字以外を入力すると意味不明な数字が入る

  /* 演算子によって異なる処理をする */
  
}
