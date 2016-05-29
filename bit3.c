/*************************************************************************
	> File Name: bit3.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 日  5/29 16:16:27 2016
 ************************************************************************/

#include<stdio.h>
int main()
{
    char a, b, c, d;
    unsigned char e;
    printf("Plz input a num:");
    scanf("%d", &a);
    b = a >> 2;
    e = 0;
    c = ~ ( ~ e << 4 );
    d = b & c;
    printf("%d\n", d);
    return 0;
}
