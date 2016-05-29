/*************************************************************************
	> File Name: typedef3.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 18:47:50 2016
 ************************************************************************/

#include<stdio.h>
typedef char* P;

int main()
{
    P p1;
    p1 = "I love Fishc.com";
    printf("%s\n",p1);

    return 0;
}
