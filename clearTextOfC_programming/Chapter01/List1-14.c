/*
    �ǂݍ���2�̐����̘a��ϐ��Ɋi�[
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;     
    int sum;

    int n3 = 50;

    puts("2�̐�������͂��Ă�������:");
    printf("����1�F");  scanf("%d", &n1);
    printf("����2�F");  scanf("%d", &n2);
    
    sum = n1 + n2;

    printf("���Ȃ������͂���2�̒l�̘a��50�𑫂���%d�ł��B\n", sum + n3);

    return 0;
}