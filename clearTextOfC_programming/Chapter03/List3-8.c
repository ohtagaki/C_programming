#include <stdio.h>

int main(void)
{
    int num;
    puts("整数を入力してください");
    printf("num：");   scanf("%d", &num);

    if((num % 10) == 4)
        puts("最下位の桁の数は4です。");
    else
        puts("最下位の桁の数は4ではありません。");
    
    return 0;
}