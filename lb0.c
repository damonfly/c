#include <stdio.h>

struct stud
{
  long num;
  float score;
  struct stud *next;
};

int main()
{
  struct stud a, b, c, *head;

  a.num = 10101;
  a.score = 89.5;
  b.num = 10103;
  b.score = 90;
  c.num = 10107;
  c.score = 85;

  head = &a;
  a.next = &b;
  b.next = &c;
  c.next = NULL;

  while(head)
  {
    printf("%ld %5.1f\n", head->num, head->score);
	head = head->next;
  }

  return 0;
}
