#include <stdio.h>
#define l 12
int main()
{
  int i, j, t, a[l];
  printf("Please input %d numbers:\n", l);
  for (i=0; i<l; i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=1;j<l;j++)
  {
    for(i=0;i<l-j;i++)
	{
	  if(a[i]>a[i+1])
	  {
	    t=a[i+1];
		a[i+1]=a[i];
		a[i]=t;
	  }
	}
  }
  for(i=0;i<l;i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
  printf("The max num is %d\n",a[l-1]);
  return 0;
}
