#include <stdio.h>

int main(void)
{
    int num;
    puts("整数を入力してください");
    printf("num：");   scanf("%d", &num);

    if(num == 0)
        puts("入力した数は0です。");
    else if(num > 0)
        puts("入力した数は正です。");
    else 
        puts("入力した数は負です。");

    return 0;
}