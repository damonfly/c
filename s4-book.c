#include<stdio.h>
#include <stdlib.h>

#define NUM 3

struct person
{
  char name[20];
  char phone[20];
};

int main()
{
  struct person man[NUM];
  int i;

  for (i = 0; i < NUM; i++)
  {
    printf("input name : \n");
	gets(man[i].name);
	printf("input phone : \n");
	gets(man[i].phone);
  }
  printf("\tname\t\t\t\t\tphone\n\n");
  for (i=0; i < NUM; i++)
  {
    printf("%20s\t\t\t%20s\n", man[i].name, man[i].phone);
  }
  system("ls");
  return 0;
}
