#include<stdio.h>
void order(int *c, int *d)
{
  int *p , f = 0 ;
  p = &f;
  *p = *c < *d ? *c : *d;
  *c = *c > *d ? *c : *d;
  *d = *p;
}
int main()
{
  int a, b;
  printf("Please input two num: ");
  scanf("%d,%d", &a, &b);
  printf("a=%d\tb=%d\n", a, b);
  order(&a,&b);
  printf("a=%d\tb=%d\n", a, b);
  return 0;
}
