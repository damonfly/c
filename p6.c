#include<stdio.h>
int main()
{
  int a, b;
  int max(int a, int b);
  int min(int x, int y);
  int add(int x, int y);
  int process(int x, int y, int (*func)());

  printf("Please input two numbers:");
  scanf("%d%d", &a, &b);

  printf("max = %d\n", process(a, b, max));
  printf("min = %d\n", process(a, b, min));
  printf("add = %d\n", process(a, b, add));
}

int max(int a, int b)
{
  return (a>b?a:b);
}

int min(int a, int b)
{
  return (a<b?a:b);
}

int add(int a, int b)
{
  return (a+b);
}

int process(int a, int b, int (*func)())
{
  return ((*func)(a,b));
}
