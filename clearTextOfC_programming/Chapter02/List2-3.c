#include <stdio.h>

int main(void)
{
    int a, b;
    puts("2�̐�������͂��Ă�������");
    printf("a:");  scanf("%d", &a);
    printf("b:");  scanf("%d", &b);

    printf("a��b�Ŋ���Ə�:%d�A���܂�%d�ł��B\n", a / b, a % b);
    
    return 0;
}