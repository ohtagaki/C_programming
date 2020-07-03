#include <stdio.h>

int main(void)
{
    int a,b;
    puts("2つの整数を入力してください");
    printf("整数a：");   scanf("%d", &a);
    printf("整数b：");   scanf("%d", &b);

    if(a == b)
        puts("2つの値は一緒です。");
    else
        puts("2つの値は一緒ではありません。");
    
    return 0;
}