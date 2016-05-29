//#include <stdio.h>
//#include <stdlib.h>
//#define LEN sizeof(struct student)
//
//struct student{
//			long int num;
//			float score;
//			struct student *next;
//};
//
//int main()
//{
//		struct student * lb_add();
//		struct student *create();
//        struct student *lb_del();
//		void print(struct student *head);
//		
//		struct student *h;
//    
//        long int nu = 0;
//		
//		h = lb_add();
//		
//		print(h);
//    
//        printf("Please input a num to del : ");
//        scanf("%ld", &nu);
//    
//        h = lb_del(h, nu);
//    
//        print(h);
//		
//		return 0;
//}
//
//struct student *create()
//{	
//		return ((struct student *)malloc(LEN));
//}
//
//struct student * lb_add()
//{
//	int n = 0;
//	struct student *p1, *p2, *head;
//    p1 = p2 = head = NULL;
//	p2 = create();    //创建第一个节点
//    
//	do
//	{		
//			p1 = p2;    //p1和p2指向同一个节点
//        
//            if(0 == n)
//            {
//                head = p1;      //使head指针指向第一个节点
//                n++;
//            }
//        
//			printf("Please input the num : ");      //输入节点学号
//			scanf("%ld", &p1->num);   
//			
//			if(0 == p1->num)        //检查输入的节点学号是否为0
//			{
//                printf("输入了非法学号\n");
//                p1->next = NULL;    //输入了非法学号，将不会有下一个节点生成。
//                p2 = p1 = NULL;      //使得节点自身消失
//
//				break;
//			}
//					
//			printf("Please input the score : ");
//			scanf("%f", &p1->score);
//					
//			p1->next = p2 = create();				
//	 }while(p1->num);
//     
//     return head;     
//}
//
//void print(struct student *head)
//{
//	struct student *t;
//	t = head;
//	if (!head)
//	{
//		printf("该链表为空\n");
//	}
//	else
//	{
//		while(t)
//		{
//			if(t->num)
//			{
//				printf("\nStudent : %ld\tScore : %f\n", t->num, t->score);
//			}
//			t = t->next;
//		}	
//	}
//}
//
//struct student *lb_del(struct student *head, long int num)
//{
//    struct student  *p1, *p2; //定义头结点，以及指针变量
//    
//    p1 = p2 = NULL;
//    
//    if(!head || !num)  //如果头节点不存在，头节点的学号为0，输入的数为0无意义，执行退出
//    {
//        printf("链表为空   \n列表不存在\n输入的数不在链表中\n");
//        return NULL;
//    }
//    
//    if (num == head->num) {   //如果输入的数为头节点的学号，则头指针指向与头指针相邻下一个节点
//        head = head->next;
//    }
//    //如果输入的数字与头节点的学号不同，则p1节点指向下一个节点
//    p2 = head;
//    p1 = head->next;
//
//    do
//    {
//        
//        if (num == p1->num)  //如果输入的数字与p1学号相同
//        {
//            if (p1->next)   //如果p1的下一个节点存在则删除当前节点，指向下一个节点
//            {
//                p2->next = p1->next;    //p2指向p1当前节点的下一个节点
//                p1 = p1->next;      //删除p1 当前节点
//            }
//            else
//            {
//                p2->next = NULL;   //否则就删除当前节点，同时结束上一个节点
//            }
//        }
//        else
//        {
//            if (p1->next)
//            {
//                p2 = p1;  //p2 指向 p1
//                p1 = p1->next;
//            }
//            else
//            {
//                p1->next = NULL;
//            }
//        }
//        
//    }while(p1->next);
//    
//    if (head) {
//        return head;
//    }
//    else
//    {
//        return NULL;
//    }
//}
//
