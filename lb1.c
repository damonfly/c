#include <stdio.h>
#include <stdlib.h>

struct student{
  long int num;
  float score;
  struct student *next;
} *head, *p1, *p2, *t;

int main()
{
  struct student *create();

	int lb_add();
  p1 = p2 = create();
  head = NULL;
  int n = 0 , *pn = &n;
  
  printf("Please input the num and score of the student: \n");
  scanf("%ld%f", &p1->num, &p1->score);
	
	lb_add(pn);
	
  while(head)
	{
		t = head;
		printf("\nStudent : %ld\tScore : %f\n", t->num, t->score);
		head = t->next;
	}
	return 0;	
}

struct student *create()
{	
	int len = sizeof(struct student);
  return ((struct student *)malloc(len));
}

int lb_add(int *pn)
{
  while(p1->num)
  {
	  (*pn)++;
	  if(1 == *pn)
	  {
		head = p1;
	  }
	  else
	  {
		p2->next = p1;  
	  }
	  p2 = p1;
	  p1 = create();
	
		printf("Please input the num and score of the student: \n");
		scanf("%ld%f", &p1->num, &p1->score);
		if(0 == p1->num)
		{
			p1->next = NULL;
			return 0;
		}
  }

	return 0;
}
