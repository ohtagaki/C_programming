/*
    2つの変数に整数値を格納して表示
*/

#include <stdio.h>

int main(void)
{
    int vx, vy, vz;     /* vxとvyはint型の変数*/

    vx = 46;
    vy = vx + 15;
    vz = vx - 15;

    printf("vxの値は%dです。\n", vx);
    printf("vyの値は%dです。\n", vy);
    printf("vzの値は%dです。\n", vz);

    return 0;
}