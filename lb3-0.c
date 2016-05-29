#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student{
			long int num;
			float score;
			struct student *next;
};

int main()
{
		struct student * lb_add();
		struct student *create();
		void print(struct student *head);
		
		struct student *h;		
		
		h = lb_add();
		
		print(h);
		
		return 0;			
}

struct student *create()
{	
		return ((struct student *)malloc(LEN));
}

struct student * lb_add()
{
	int n = 0;
	struct student *p1, *p2, *head = NULL;
	p1 = p2 = create();
	do
	{		
			p1 = p2;
        
            if(0 == n)
            {
                head = p1;
                n++;
            }
        
			printf("Please input the num : ");
			scanf("%ld", &p1->num);   
			
			if(0 == p1->num)
			{
				p1->next = NULL;
				printf("输入了非法学号\n");
				break;
			}
					
			printf("Please input the score : ");
			scanf("%f", &p1->score);
					
			p1->next = p2 = create();				
	 }while(p1->num);
        return head;
}

void print(struct student *head)
{
	struct student *t;
	t = head;
	if (!head->num)
	{
		printf("该链表为空\n");
	}
	else
	{
		while(t)
		{
			if(t->num)
			{
				printf("\nStudent : %ld\tScore : %f\n", t->num, t->score);
			}
			t = t->next;
		}	
	}
}

