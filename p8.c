#include<stdio.h>
int main()
{
  int i;
  int a[]={1, 3, 5, 7, 9};
  int *b[]={&a[0], &a[1], &a[2], &a[3], &a[4]};
  for(i=0; i<5; i++)
  {
    printf("%d\t",*b[i]);
  }
  printf("\n");
  return 0;
}
