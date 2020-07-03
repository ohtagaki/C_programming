#include <stdio.h>

int main(void)
{
    int a, b;
    int max;
    puts("2つの整数を入力してください");
    printf("整数a：");   scanf("%d", &a);
    printf("整数b：");   scanf("%d", &b);

    if(a > b) max = a; else max = b;
    printf("大きい方の値は%dです。", max);  
    
    return 0;
}