#include <stdio.h>

int main(void)
{
    int num;
    printf("整数を入力してください：");
    scanf("%d", &num);

    if(num % 3 == 0)
        puts("その数は3で割り切れます。");
    else if(num % 3 == 1)
        puts("その数を3で割った剰余は1です。");
    else
        puts("その数を3で割った剰余は2です。");

    return 0;
}