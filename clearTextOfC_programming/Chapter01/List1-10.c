/*
    2つの変数に値を代入せずに表示
*/

#include <stdio.h>

int main(void)
{
    int vx = 45;     /* vxはint型の変数(45で初期化)*/
    int vy = vx + 24; /* vyはint型の変数(vx + 24で初期化)*/

    printf("vxの値は%dです。\n", vx);
    printf("vyの値は%dです。\n", vy);

    return 0;
}