/*************************************************************************
	> File Name: file5.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 六  5/28 16:51:12 2016
 ************************************************************************/

#include<stdio.h>
#define LEN 20 
int main()
{
    FILE *fp;
    char ch, buffer[LEN];

    if( !(fp = fopen("filer.txt", "at+")) )
    {
        printf("Cannot open the file~!");
        return 1;
    }

    printf("Plz input a string:\n");
    fgets(buffer, LEN, stdin);
    fputs(buffer, fp);
    rewind(fp);
    ch = fgetc(fp);
    
    while( ch != EOF )
    {
        putchar(ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    return 0;
}
