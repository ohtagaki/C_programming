#include <stdio.h>

int main(void)
{
    int num;
    puts("整数を入力してください");
    printf("num：");   scanf("%d", &num);

    if(num > 0)
        if(num % 2 == 0)
            puts("その数は偶数です。");
        else
            puts("その数は奇数です。");
    else
        puts("正ではない数が入力されました。");

    return 0;
}