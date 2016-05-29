#include<stdio.h>
int main()
{
  int i, j;
#if(0)
  int a[3][4]={{1},{5},{9}};
#endif
  int a[3][4]={1, 5, 9};
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
	{
	  printf("\ta[%d][%d] = %d", i, j, a[i][j]);
	}
	printf("\n");
  }
  return 0;
}
