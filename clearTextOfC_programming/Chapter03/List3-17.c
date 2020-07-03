#include <stdio.h>

int main(void)
{
    int month;
    printf("何月ですか:");
    scanf("%d", &month);

    if(3 <= month && month <= 5)
        printf("%d月は春の季節です。\n", month);
    else if(6 <= month && month <= 8)
        printf("%d月は夏の季節です。\n", month);
    else if(9 <= month && month <= 11)
        printf("%d月は秋の季節です。\n", month);
    else if(month == 1 || month == 2 || month == 12)
        printf("%d月は冬の季節です。\n", month);
    else
        printf("%d月はありません。\n", month);

    return 0;
}