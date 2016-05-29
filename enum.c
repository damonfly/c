/*************************************************************************
	> File Name: enum.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 14:10:50 2016
 ************************************************************************/

#include<stdio.h>
int main()
{
    enum weekday{sun, mon, tue, wed, thu, fri, sat} a, b, c;
    a = sun; // a = 1; is not allowed
    b = mon;
    c = tue;

    printf("%d %d %d\n\n", a, b, c);
    return 0;
}
