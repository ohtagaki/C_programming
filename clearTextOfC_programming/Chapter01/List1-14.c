/*
   読み込んだ2つの整数値の和を変数に格納して表示
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;     
    int sum;

    puts("2つの整数を入力してください。:");
    printf("整数1：");  scanf("%d", &n1);
    printf("整数2：");  scanf("%d", &n2);
    
    sum = n1 + n2;

    printf("それらの和は%dです。\n", sum);

    return 0;
}