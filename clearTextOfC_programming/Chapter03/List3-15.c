#include <stdio.h>

int main(void)
{
    int n1, n2, diff;
    printf("整数a：");   scanf("%d", &n1);
    printf("整数b：");   scanf("%d", &n2);

    diff = (n1 >= n2) ? n1 - n2 : n2 - n1;

    printf("2つの数の差は%dです。", diff);  
    
    return 0;
}