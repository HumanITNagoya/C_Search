/* 10個の配列の中に入力した数値があるかを二分探索で確認するプログラム */
#include <stdio.h>

int main()
{
  /* 変数宣言 */
  int comp , i　, el;
  int tbl[10];
  
  /* 0～9までの数値を配列に順番に格納 */
  for(i=0 ; i<10 ; i++)
    tbl[i] = i;
  
  /* 数値の入力 */
  printf("0～9の数字を入力してください\n");
  scanf("%d" , &comp);
  
  /* 二分探索 */
  el=10/2;
  i=el;
  while(tbl[el]!=comp){
    if(tbl[el] < comp)
      el /= 2;
    else
      el = i + el / 2;
  }
  
  printf("数値は%d番目にあります\n",i);
  
  return 0;
}
