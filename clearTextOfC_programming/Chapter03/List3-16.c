#include <stdio.h>

int main(void)
{
    int n1, n2, max, min;
    printf("整数a：");   scanf("%d", &n1);
    printf("整数b：");   scanf("%d", &n2);

    if(n1 > n2){
        max = n1;
        min = n2;
    }else if(n1 < n2){
        max = n2;
        min = n1;
    }else{
        printf("2つの数は一緒です。");
        return 0;
    }

    printf("2つの数の大きい方の値は%dです。", max);
    printf("2つの数の小さい方の値は%dです。", min);  
    
    return 0;
}