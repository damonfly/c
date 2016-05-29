/*************************************************************************
	> File Name: enum0.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 11:59:09 2016
 ************************************************************************/

#include<stdio.h>
struct 
{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class;
        char position[10];
    } category;
} person[3];

int main()
{
    int i = 0, n = 4;
    for(i = 0; i < n; i++)
    {
        printf("Plz input the person's num, name, sex, job : ");
        scanf("%d%s%s%s", &person[i].num, &person[i].name[0], &person[i].sex, &person[i].job);
        if('s' == person[i].job)
        {
            printf("Plz input the student's class : ");
            scanf("%d", &person[i].category.class);
        }
        else 
        {
            if('t' == person[i].job)
            {
                printf("Plz input the teacher's category : ");
                scanf("%s", &person[i].category.position[0]);
            }
            else
            {
                printf("input error\n");
                return 0;
            }
         }
    }

    printf("\nnum\tname\tsex\tjob\tclass or position:\n");
    
    for(i = 0; i < n; i++)
    {
        if('t' == person[i].job)
        {
            printf("%d\t%s\t%c\t%c\t%s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
        }
        else 
        {
            printf("%d\t%s\t%c\t%c\t%d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.class);
        }
    }

    return 0;
}
