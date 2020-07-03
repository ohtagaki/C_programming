#include <stdio.h>

int main(void)
{
    int n1, n2, max;
    printf("整数a：");   scanf("%d", &n1);
    printf("整数b：");   scanf("%d", &n2);

    max = (n1 >= n2) ? n1 : n2;

    printf("最大値は%dです。", max);  
    
    return 0;
}