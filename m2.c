#include<stdio.h>
int main()
{
  int *p1, *p2,
	  a[]={1, 3, 5, 7, 9, 11}
  ;
  p1=&a[1];
  p2=&a[3];
  printf("%d\n", p1-p2);

  return 0;
}
