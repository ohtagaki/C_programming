/*
     読み込んだ整数値の5倍の値を表示
*/

#include <stdio.h>

int main(void)
{
    int no;    

    printf("整数値を入力してください:");
    scanf("%d", &no);

    printf("その数の値の5倍は%dです。\n", no * 5);

    return 0;
}