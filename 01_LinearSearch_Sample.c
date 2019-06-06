/* 10個の配列の中に入力した数値があるかを線形（逐次）探索で確認するプログラム */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  /* 変数宣言 */
  int comp , i;
  int tbl[10];
  
  /* ランダム関数の初期化 */
  srand((unsigned) time (NULL));
  
  /* 0～99までのランダムな数値を配列に格納 */
  for(i=0 ; i<10 ; i++)
    tbl[i] = rand() % 100;
  
  /* デバッグ用　数値の確認 */
  for(i=0 ; i<10 ; i++)
    printf("%d " , tbl[i]);
  
  /* 数値の入力 */
  printf("0～99の数字を入力してください\n");
  scanf("%d" , &comp);
  
  /* 線形探索 */
  
  
  return 0;
}
