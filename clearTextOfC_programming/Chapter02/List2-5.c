#include <stdio.h>

int main(void)
{
    int a, b;
    puts("2つの整数を入力してください：\n");
    printf("整数a:");  scanf("%d", &a);
    printf("整数b:");  scanf("%d", &b);

    printf("2つの整数の平均値は%dです。\n", (a + b) / 2);
    
    return 0;
}