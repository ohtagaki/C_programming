/*
    読み込んだ整数値をそのまま表示
*/

#include <stdio.h>

int main(void)
{
    int no;     /* noはint型の変数*/

    printf("整数を入力してください。");
    scanf("%d", &no);

    printf("入力した数字は、%dです。\n", no);

    return 0;
}