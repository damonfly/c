/*************************************************************************
	> File Name: bit4.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 日  5/29 17:03:38 2016
 ************************************************************************/

#include<stdio.h>
int main()
{
    unsigned char a, b, c;
    int n;

    printf("Plz input the num to be right move : ");
    scanf("%d", &a);
    printf("input the right move bit num : ");
    scanf("%d", &n);

    b = a << ( sizeof(char) * 8 - n );
    c = a >> n;
    c = c | b;
    printf("Result is : %c", c);

    return 0;
}
