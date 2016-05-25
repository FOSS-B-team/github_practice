#include<stdio.h>
/* リンクヘッダ */
#include "kakezan.h"

/* プロトタイプ宣言 */
void tashizan(void);
void hikizan(void);

int main(void)
{
  int ope; //演算子を識別するため
  int f = 1; //終了フラグ

  do{
    printf("計算したい演算を選んでください( +, -, *, / ):");
    ope = getchar();
    while( getchar() != '\n');
    switch(ope){
      case '+':
           tashizan();
        break;
      case '-':
           hikizan();
        break;
      case '*':
          kakezan();
        break;
      case '/':
            printf("未実装\n");
        break;
      default:
        printf("間違った演算子です\n");
        continue;
    }

    printf("もう一度する？(する→1, しない→0):");
    scanf("%d", &f);
    (void)getchar();

  }while(f);

}

/*** 足し算関数
 *  name tashizan
 *  Author tkbtk-kic
 ***/
void tashizan(void)
{
 int a = 0;
 int b = 0;
 printf("一つ目の数字を入力してください:");
 scanf("%d",&a);
    while( getchar() != '\n');
 printf("二つ目の数字を入力してください:");
 scanf("%d",&b);
    while( getchar() != '\n');
 printf("%d+%d=%d\n",a,b, a+b);
}


/*** 引き算関数
 * name hikizan
 * Author: Yamashita
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


/*** 割り算関数
 *  * name warizan
 *   * Author: Oka
 *    */
void warizan(void)
{
 int a;
 int b;
 int c;
 printf("割り算の計算をします\n");
 printf("一つ目の数字を入力してください\n");
 scanf("%d",&a);

 printf("二つ目の数字を入力してください");
 scanf("%d",&b);

 c=a/b;
 printf("%d-%d=%d\n",a,b,c);
}

