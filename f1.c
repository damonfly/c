#include<stdio.h>
int sq(int x);
int jiec(int y);
int main()
{
    int s = 0, t1, t2;
    t1=sq(2);
    t2=sq(3);
    
    s += jiec(t1);
    s += jiec(t2);
    printf("s = %d\n", s);
    return 0;
}

int sq(int x)
{
    return x*x;
}

int jiec(int y)
{
    int t;
    t=y;
    while(y>0)
    {
        if(y<=1)
        {
            return t;
        }
        t*=(y-1);
        y--;
    }
    return t;
}
