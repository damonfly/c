/*************************************************************************
	> File Name: enum2.c
	> Author: damon 
	> Mail: damon.fu@qq.com 
	> Created Time: 三  5/25 14:17:01 2016
 ************************************************************************/

#include<stdio.h>
int main()
{
    enum boy{tom, danny, gan, lilei}month[31], j;
    int i;

    j = tom;

    for( i = 1; i <= 30; i++ )
    {
        month[i] = j;
        j++;
        if( j > lilei )
        {
            j = tom;
        }
    }
    for ( i = 1; i <= 30; i++ )
    {
        switch (month[i])
        {
            case tom: printf(" %4d %s\t", i, "tom");
                break;
            case danny: printf("%4d %s\t", i, "danny");
                break;
            case gan: printf("%4d %s\t", i, "gan");
                break;
            case lilei: printf("%4d %s\t", i, "lilei");
            default:
                break;
        }
    }

    printf("\n\n");
    return 0;
}
