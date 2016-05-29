/*************************************************************************
	> File Name: enum.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 一  5/23 10:49:39 2016
 ************************************************************************/

#include<stdio.h>
#include "string.h"

struct
{
    int num;
    char name[10];
    char sex;
    char job;
    union
    {
        int class;
        char position[10];
    }category;
}person[4];

int main()
{
    int i, n;
    n = 4;
    for(i = 0; i < n; i++)
    {
        printf("请输入您的职业：");
        scanf("%c", &person[i].job);
        if('t' == person[i].job)
        {
            printf("请输入老师学号：");
            scanf("%d", &person[i].num);
            printf("请输入老师的姓名：");
            scanf("%s", person[i].name);
            printf("请输入性别：");
            scanf("%s", &person[i].sex); 
            printf("请输入老师的职务：");
            scanf("%s",person[i].category.position);
            getchar();
        }
        else if('s' == person[i].job)
        {
            printf("请输入学生学号：");
            scanf("%d", &person[i].num); 
            printf("请输入学生的姓名：");
            scanf("%s", &person[i].name[0]);
            printf("请输入性别：");
            scanf("%s", &person[i].sex);
            printf("请输入学生的班级：");
            scanf("%d", &person[i].category.class);
            getchar();
        }
        else
        {
            printf("输入错误！\n");
            return 0;
        }
    }
    
    printf("\nnum\tname\tsex\tjob\tclass or position\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%c\t%c\t", person[i].num, person[i].name, person[i].sex, person[i].job);
        if('s' == person[i].job)
        {
            printf("%d\n", person[i].category.class);
        }
        else
        {
            printf("%s\n", person[i].category.position);
        }
    }
    return 0;
}

