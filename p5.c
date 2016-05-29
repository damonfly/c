#include<stdio.h>
int main()
{
  double score[][4]={{60.0, 70.0, 80.5, 90.5}, {56.5, 89.5, 67.0, 88.0}, {34.2,78.5, 90.5, 67.7}};
  double *search(double (*pointer)[4], int n);
  double *p;
  int i, m;
  printf("Please input m id (0 | 1 | 2) : ");
  scanf("%d", &m);
  printf("The score of m is : ");
  p = search(score, m);
  for (i=0; i<4; i++)
  {
    printf("%5.2lf\t", *(p + i));
  }
  printf("\n");
  return 0;

}

double *search(double (*pointer)[4], int n)
{
  double *pt;
  pt = *(pointer + n);
  return pt;

}
