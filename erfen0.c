#include<stdio.h>
#define M 10
int main()
{
  int low=0, mid, high=9, found=0,
	  a[M]={-12, 0, 6, 16, 23, 56, 80, 100, 110, 115};
  printf("Please input a number to find : \n");
  scanf("%d",&found);
  if(a[low]>found && a[high]<found)
  {
    
		  printf("not found\n");
		  return 1;
  }
  while(a[low]<=a[high])
  {
	  mid=(low+high)/2;
	  if(a[mid]>found)
	  {
		high=mid-1;
		if(a[high]<found)
		{
		  printf("not found\n");
		  return 1;
		}
	  } 
	  else if (a[mid]<found)
	  {
	    low=mid+1;
		if(a[low]>found)
		{
		  printf("not found\n");
		  return 1;
		}
	  }
	  else
	  {
	  printf("found !\nIt is : %d index = %d\n", a[mid], mid);
	  return 0;
	  }

  }
	  if(a[low]>a[high])
	  {
		printf("not found\n");
		return 1;
	  }
  return 0;
}
