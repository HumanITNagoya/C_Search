/* 10個の配列の中に入力した数値があるかを線形（逐次）探索で確認するプログラム */
#include <stdio.h>

int main()
{
  /* 変数宣言 */
  int comp , i;
  
  /* 適当な数値を配列に入れる */
  int tbl[10] = {101,82,114,43,28,128,55,256,11,71};
  
  /* デバッグ用　数値の確認 */
  for(i=0 ; i<10 ; i++)
    printf("%d " , tbl[i]);
  
  /* 数値の入力 */
  printf("\n数字を入力してください\n");
  scanf("%d" , &comp);
  
  /* 線形探索 */
  for(i=0 ; tbl[i]!=comp && i<10 ; i++);
  
  if(i!=10)
    printf("数値は%d番目にありました\n",i);
  else
    printf("数値はありませんでした\n");
  
  return 0;
}
