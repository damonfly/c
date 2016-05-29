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
    int i = 0, n = 3, num;
    for(i = 0; i < n; i++)
    {
        printf("Plz input the job [s | t] :");
        scanf("%c", &person[i].job);
        
        if('t' == person[i].job)
        {
            printf("Plz input the teacher's num, name, sex, category : ");
            num = scanf("%d%s%s%s", &person[i].num, &person[i].name[0], &person[i].sex,  &person[i].category.position[0]);
            printf("%d",num);
            getchar();
            getchar();
            getchar();
            getchar();
            getchar();
            getchar();
        }
        else if('s' == person[i].job)
        {
            printf("Plz input the student's num, name, sex, category : ");
            scanf("%d%s%s%d", &person[i].num, &person[i].name[0], &person[i].sex, &person[i].category.class);
            getchar();
        }
        else
        {
            printf("input error\n");
            return 0;
        }
    }

    printf("\nnum\tname\tsex\tjob\tclass or position:\n");
    
    for(i = 0; i < n; i++)
    {
        if('t' == person[i].job)
        {
            printf("%d\t%s\t%c\t%c\t%s", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
        }
        else 
        {
            printf("%d\t%s\t%c\t%c\t%d", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.class);
        }
    }

    return 0;
}
