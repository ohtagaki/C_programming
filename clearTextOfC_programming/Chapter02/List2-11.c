#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum;
    double ave;

    puts("3つの整数を入力してください：\n");
    printf("整数a:");  scanf("%d", &a);
    printf("整数b:");  scanf("%d", &b);
    printf("整数c:");  scanf("%d", &c);

    sum = a + b + c;
    ave = (double) sum / 3;

    printf("3つの整数の合計値は、%5dです。\n", sum);
    printf("3つの整数の平均値は、%5.1fです。\n", ave);
    
    return 0;
}