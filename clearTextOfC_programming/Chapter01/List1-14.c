/*
    読み込んだ2つの整数の和を変数に格納
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;     
    int sum;

    int n3 = 50;

    puts("2つの整数を入力してください:");
    printf("整数1：");  scanf("%d", &n1);
    printf("整数2：");  scanf("%d", &n2);
    
    sum = n1 + n2;

    printf("あなたが入力した2つの値の和に50を足すと%dです。\n", sum + n3);

    return 0;
}