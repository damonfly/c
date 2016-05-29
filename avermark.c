#include<stdio.h>
int main()
{
  int ma=0, ca=0, fa=0, sa=0, i,
	  m[5][3]={80,75,92,61,65,71,59,63,70,85,87,90,76,77,85};
  for(i=0;i<5;i++)
  {
    ma+=m[i][0];
	ca+=m[i][1];
	fa+=m[i][2];
  }
  ma/=5;
  ca/=5;
  fa/=5;
  sa=(ma+ca+fa)/3;
  printf("ma = %d\nca = %d\nfa = %d\nsa = %d\n", ma, ca, fa, sa);
  return 0;
}
