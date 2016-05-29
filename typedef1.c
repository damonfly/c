/*************************************************************************
	> File Name: typedef1.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 18:40:44 2016
 ************************************************************************/

#include<stdio.h>

typedef struct
{
    int month;
    int day;
    int year;
}DATE;

int main()
{
    DATE date_one;

    date_one.month = 12;
    date_one.day = 31;
    date_one.year = 2012;

    printf("%d - %d - %d \n", date_one.year, date_one.month, date_one.day);

    return 0;
}
