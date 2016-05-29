#include<stdio.h>
int fac(int x);
int main()
{
  int t1,t2;
  printf("Please input a num: ");
  scanf("%d", &t1);
  t2=fac(t1);
  printf("factorial of %d is : %d\n", t1, t2);
  return 0;
}

int fac(int x)
{
  int s=x;
  if(x<=1)
  {
	return 1;
  }
  else
  {
    s *= fac(x-1);
  }
  return s;
}

