#include <stdio.h>

int main(void)
{
    int a, b;
    puts("2つの整数を入力してください");
    printf("整数a：");   scanf("%d", &a);
    printf("整数b：");   scanf("%d", &b);

    if(a > b)
        printf("大きい方の値は%dです。\n", a);
    else if(a < b)
        printf("大きい方の値は%dです。\n", b);
    else
        printf("2つの値は一緒です。\n");
    
    return 0;
}