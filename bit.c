/*************************************************************************
	> File Name: bit.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 六  5/28 18:27:44 2016
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch, CH;
    CH = '\0'; 
    printf("Plz input a letter:");
    scanf("%c", &ch);
    while(ch < 'A' || ch > 'z' || (ch > 'Z' && ch < 'a'))
    {
        printf("\nPlz input a letter:");
        scanf("%c", &ch);
    }
    CH = (ch ^ 32);
    printf("%c <---> %c\n", ch , CH);
    return 0;
}
