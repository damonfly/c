#include<stdio.h>
int main()
{
  struct student 
  {
    int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
  };
  struct student stu;
  printf("length is %lu \n", sizeof(stu.num));
  printf("length is %lu \n", sizeof(stu.name));
  printf("length is %lu \n", sizeof(stu.sex));
  printf("length is %lu \n", sizeof(stu.age));
  printf("length is %lu \n", sizeof(stu.score));
  printf("length is %lu \n", sizeof(stu.addr));
  printf("length is %lu \n", sizeof(stu));
  return 0;
}
