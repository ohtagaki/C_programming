#include <stdio.h>

int main(void)
{
    int num;
    printf("整数を入力してください：");
    scanf("%d", &num);

    if(num != 0)
        puts("その数は0ではありません。");
    else
        puts("その数は0です");
    
    return 0;
}