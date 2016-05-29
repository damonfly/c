/*************************************************************************
	> File Name: file6.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 六  5/28 17:10:41 2016
 ************************************************************************/

#include<stdio.h>
#define SIZE 4

struct stuent
{
    char name[10];
    int num;
    int age;
    char addr[15];
}stu[SIZE];

int main()
{
    FILE *fp;
    int i;

    if( !(fp = fopen("stuent-list", "wb")) )
    {
        printf("Can not open the file~!");
        return 1;
    }

    for(i = 0; i < SIZE; i++)
    {
        printf("Input name:");
        scanf("%s", stu[i].name);
        printf("input num:");
        scanf("%d", &stu[i].num);
        printf("Input age:");
        scanf("%d", &stu[i].age);
        printf("input the addr:");
        scanf("%s", stu[i].addr);
        printf("complete input the stuent's Info !\n");
        fwrite(&stu[i], sizeof(struct stuent), 1, fp);
    }
    
    rewind(fp);

    for(i = 0; i < SIZE; i++)
    {
        fread(&stu[i], sizeof(struct stuent), 1, fp);
        printf("\nname\tnum\tage\t\taddr\n");
        printf("%s\t%d\t%d\t%s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].addr);
    }
    fclose(fp);
    return 0;
}
