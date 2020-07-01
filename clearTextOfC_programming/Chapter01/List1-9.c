/*
    2つの変数に値を代入せずに表示
*/

#include <stdio.h>

int main(void)
{
    int vx, vy;     /* vxとvyはint型の変数*/
    /*変数が生成される際には、不定値(ごみの値)が入れられる*/

    printf("vxの値は%dです。\n", vx);
    printf("vyの値は%dです。\n", vy);

    return 0;
}