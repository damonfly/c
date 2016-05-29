/*************************************************************************
	> File Name: file1.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 四  5/26 09:42:58 2016
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch, filename[20];
    ch = '\0';
    printf("Plz input the filename you want to write: ");
    scanf("%s", filename);

    if( !(fp = fopen(filename, "r")) )
    {
        printf("Cannot open the file!\n");
        exit(0);
    }


    while( ch != EOF )
    {
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
