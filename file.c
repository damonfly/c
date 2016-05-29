/*************************************************************************
	> File Name: file.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 19:49:31 2016
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    if( !(fp=fopen("/Users/d/imooc/c/union.c", "rb")) )
    {
        printf("can not open /Users/d/imooc/c/union.c");
        system("ls");
    }
    else
    {
        printf("open success!\n");
    }
    return 0;
}
