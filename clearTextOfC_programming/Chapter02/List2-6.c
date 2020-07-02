#include <stdio.h>

int main(void)
{
    int n;
    double x;
    
    n = 2.5;
    x = 9.99;

    printf("int 型変数のnの値：%d\n", n);
    printf("int 型変数のn/2の値：%d\n", n / 2);
    
    printf("double 型変数のxの値：%f\n", x);
    printf("double 型変数のx/2の値：%f\n", x / 2.0);

    return 0;
}