#include<stdio.h>
int main()
{
  int a[2][3]={1,2,3,4,5,6},b[3][2],i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
	{
	  b[j][i]=a[i][j];
	}
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
	{
	  printf("%d ",a[i][j]);
	}
	printf("\n");
  }
  for(j=0;j<3;j++)
  {
    for(i=0;i<2;i++)
	{
	  printf("%d ",a[i][j]);
	}
	printf("\n");
  }
  return 0;
}
