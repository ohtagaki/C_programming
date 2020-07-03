#include <stdio.h>

int main(void)
{
    int num;
    puts("整数を入力してください：");  
    scanf("%d", &num);

    if(num % 5 != 0)
        puts("その数は5で割り切れません。");
    else
        puts("その数は5で割り切れます");
    
    return 0;
}