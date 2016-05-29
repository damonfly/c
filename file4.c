/*************************************************************************
	> File Name: file4.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 六  5/28 16:38:22 2016
 ************************************************************************/

#include<stdio.h>
#define LEN 24
int main()
{
    FILE *fp;
    char buffer[LEN];

    if( !(fp = fopen("filerw.txt", "rt")) )
    {
        printf("\nCan not open the file!\n");
        return 1;
    }

    fgets(buffer, LEN, fp);

    printf("%s\n", buffer);
    fclose(fp);

    return 0;
}
