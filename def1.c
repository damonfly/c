#include <stdio.h>

int main()
{
  int i=1;
  int SQ(int y);

  while(i<=5)
  {
    printf("%d\n", SQ(i++));
  }
  return 0;
}

int SQ(int y)
{
  return ((y) * (y));
}
