/*
    “Ç‚İ‚ñ‚¾2‚Â‚Ì®”‚Ì˜a‚ğ•Ï”‚ÉŠi”[
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;     
    int sum;

    int n3 = 50;

    puts("2‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    printf("®”1F");  scanf("%d", &n1);
    printf("®”2F");  scanf("%d", &n2);
    
    sum = n1 + n2;

    printf("‚ ‚È‚½‚ª“ü—Í‚µ‚½2‚Â‚Ì’l‚Ì˜a‚É50‚ğ‘«‚·‚Æ%d‚Å‚·B\n", sum + n3);

    return 0;
}