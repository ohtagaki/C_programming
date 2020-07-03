#include <stdio.h>

int main(void)
{
    int n1, n2, n3, max;
    printf("整数a：");   scanf("%d", &n1);
    printf("整数b：");   scanf("%d", &n2);
    printf("整数c：");   scanf("%d", &n3);

    max = n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;

    printf("最大値は%dです。", max);  
    
    return 0;
}