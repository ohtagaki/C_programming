#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    double d1, d2, d3, d4;
    
    n1 = 7 / 3;
    n2 = 7.0 / 3.0;
    n3 = 7.0 /3;
    n4 = 7 / 3.0;
    
    d1 = 7 / 3;
    d2 = 7.0 / 3.0;
    d3 = 7.0 /3;
    d4 = 7 / 3.0;

    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);
    printf("n4 = %d\n", n4);

    printf("d1 = %f\n", d1);
    printf("d2 = %f\n", d2);
    printf("d3 = %f\n", d3);
    printf("d4 = %f\n", d4);
    
    return 0;
}