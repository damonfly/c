#include<stdio.h>
#include<string.h>

struct student
{
  int num;
  char name[20];
  float score[3];
};

void print(struct student);

int main()
{
  struct student stu;

  stu.num = 8;
  strcpy(stu.name, "Fishc.com!");
  stu.score[0] = 98.5;
  stu.score[1] = 99.0;
  stu.score[2] = 99.5;
  print(stu);
}

void print(struct student stu)
{
  printf("\tnum    : %d\n", stu.num);
  printf("\tname   : %s\n", stu.name);
  printf("\tcore_3 : %5.2f\n", stu.score[0]);
  printf("\tcore_3 : %5.2f\n", stu.score[1]);
  printf("\tcore_3 : %5.2f\n", stu.score[2]);
}

