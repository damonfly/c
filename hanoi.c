#include<stdio.h>
void hanoi(int n, char one, char two, char three);
void move(char x, char y);
int main()
{
  int n;
  printf("Please input a num:");
  scanf("%d", &n);
  hanoi(n, 'A', 'B', 'C');
}
void hanoi(int n, char one, char two, char three)
{
  if(1==n)
  {
    move(one,three);
  }
  else
  {
    hanoi(n-1, one, three, two);
    move(one,three);
	hanoi(n-1,two, one, three);
  }
}
void move(char x, char y)
{
  printf(" %c --> %c \n", x, y);
}
void move(char x, char y);

