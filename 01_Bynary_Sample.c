/* 二分探索で目的の数値を探すプログラム */
#include <stdio.h>

int main()
{
    /* 変数・配列の宣言 */
    int tbl[10];
    int i;
    int low = 0;
    int high = 10;
    int mid;
  
    /* 100～109の数値を配列に順番に入れる */
    for(i=0 ; i<10 ; i++)
        tbl[i] = i + 100 ;

    /* 配列の中身の出力 */
    for(i=0 ; i<10 ; i++)
        printf("配列の%d番目は%d\n" , i , tbl[i]);

    /* 二分探索 */
    int a;
    printf("探したい数値を入力してください。\n");
    scanf("%d" , &a);
    mid = (low + high) / 2;    

    printf("low:%d mid:%d high:%d\n", low , mid , high);

    while(low <= high && tbl[mid] != a ){
        if(tbl[mid] < a)
            low = mid + 1;
        else
            high = mid - 1;
        mid = (low + high) / 2;
        printf("low:%d mid:%d high:%d\n", low , mid , high);
    }

    if(tbl[mid] == a)
        printf("%dは%d番目にありました。\n" , a , mid);
    else
        printf("%dはありませんでした。\n" , a);
    
    return 0;
}
