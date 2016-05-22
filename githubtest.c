#include<stdio.h>

/* プロトタイプ宣言 */
void hikizan(void);

int main(void)
{
  int ope; //演算子を識別するため
  int f = 1; //終了フラグ

  do{
    printf("計算したい演算を選んでください(+,-,*,/):");
    ope = getchar();
    
    switch(ope){
      case '+':
           printf("+\n");
        break;
      case '-':
           hikizan();
        break;
      case '*':
            printf("*\n");
        break;
      case '/':
            printf("/\n");
        break;
      default:
        printf("間違った演算子です\n");
        continue;
    }

    printf("もう一度する？(する→1, しない→0):");
    scanf("%d", &f);

  }while(f);

}

/*** 引き算関数
 * name hikizan
 * Autor: Yamashita
 */
void hikizan(void)
{
 int a;
 int b;
 int c;
 printf("引き算の計算をします\n");
 printf("一つ目の数字を入力してください\n");
 scanf("%d",&a);

 printf("二つ目の数字を入力してください");
 scanf("%d",&b);

 c=a-b;
 printf("%d-%d=%d\n",a,b,c);
}
