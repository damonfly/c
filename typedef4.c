/*************************************************************************
	> File Name: typedef4.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 18:51:48 2016
 ************************************************************************/

#include<stdio.h>

typedef int (*POINTER)();

int main()
{
    POINTER p1;
    int add();
    p1 = add;
    
    printf("6 + 5 =%d\n", p1(6,5));
    return 0;
}

int add(int x, int y)
{
    return (x + y);
}
