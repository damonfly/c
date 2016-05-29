#include<stdio.h>
int main()
{
  int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  int (*p)[4];
  int i, j;
  p=a;
  printf("Please input the value of i and j:\n");
  do{
	printf("i = ");
    scanf("%d", &i);
  }while(i<0 || i > 2);
  do{
	printf("j = ");
    scanf("%d", &j);
  }while(j<0 || j > 3);
	  printf("%d\t",*(*(p+i)+j));
	printf("\n");
  return 0;
}
