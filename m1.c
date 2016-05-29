#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
  int i;

  printf("The number of strings is : %d\n", argc-1);

  for (i = 0; i <argc; i++)
  {
    printf("The string %d is : %s\n", i, argv[i]);
  }
  return 0;
}
