#include<stdio.h>
#define N 9
int main()
{
  int t, i, a[N];
  printf("Please input %d numbers:",N);  //输入N个数
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  t=a[0];
  for (i=1;i<N;i++)      //找最小数
  {
      if (t>a[i])
    {
      t=a[i];
    }
  }
  for (i=0;i<N;i++)   //找罪左边的最小数，并打印索引
  {
   if(t==a[i]){
   printf("the minimum numbers is %d , its index is %d\n", t, i);
   break;
   }
  }
  t=a[0];   // 交换最左边最小数和第一个数的位置
  a[0]=a[i];
  a[i]=t;
  return 0;
}