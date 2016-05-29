/*************************************************************************
	> File Name: typedef5.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 19:01:23 2016
 ************************************************************************/

#include<stdio.h>
typedef int (*POINTER)();
int main()
{
    int fun();
    POINTER p;
    p = fun;
    p();
    return 0;
}
int fun()
{
    printf("I Love Fishc.com\n\n");
    return 0;
}
