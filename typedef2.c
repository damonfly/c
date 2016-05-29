/*************************************************************************
	> File Name: typedef2.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 18:45:31 2016
 ************************************************************************/

#include<stdio.h>
typedef int NUM[100];

int main()
{
    NUM num;
    printf("%d\n", sizeof(num));
    return 0;

}
