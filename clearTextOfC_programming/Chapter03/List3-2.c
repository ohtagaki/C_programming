#include <stdio.h>

int main(void)
{
    int num;
    puts("整数を入力してください：");
    scanf("%d", &num);

    if(num % 2 != 0)
        puts("その数は奇数です。");
    
    return 0;
}