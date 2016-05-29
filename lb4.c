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
//        struct student *lb_insert();
//        struct student *lb_mod();
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
//        printf("\n\nPlease input a num to del : ");
//        scanf("%ld", &nu);
//    
//        h = lb_del(h, nu);
//    
//        print(h);
//        
//        h = lb_insert(h);
//        
//        print(h);
//        
//        h = lb_mod(h);
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
//                printf("\n\n输入了非法学号\n结束链表创建\n");
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
//     printf("\n链表创建完成！\n");
//     return head;     
//}
//
//void print(struct student *head)
//{
//	struct student *t;
//	t = head;
//	if (!head)
//	{
//		printf("\n该链表为空\n");
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
//        printf("\n\n链表为空   \n或列表不存在\n或输入的数不在链表中\n");
//        return head;
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
//    return head;
//}
//
//struct student *lb_insert(struct student *head)
//{
//    struct student *p1, *p2, *pre;
//    long int x = 0;
//    pre = head;
//    
//    p1 = create();
//    printf("\n\n请输入一个学号，以便在该学号前插入节点 ：");
//    
//    do
//    {
//        printf("\n请输入非零数字学号！\n");
//        scanf("%ld",&x);
//    }while(!x);
//    
//    if(x == head->num)
//    {
//        p1->next = head;
//        head = p1;
//        return head;
//    }
//    else 
//    {       
//        do
//        {
//            p2 = pre->next;
//            if(x == p2->num)
//            {
//                pre->next = p1;
//                p1->next = p2;
//                break;
//            }
//            pre = pre->next;
//        }while(x != p2->num && p2->next);
//        if(!p2->next)       //如果数字不在已有的学号里面，添加尾节点
//        {
//            p2->next = p1;
//            p1->next = NULL;
//        }
//    }
//
//    printf("\n\nPlease input the num : ");      //输入节点学号
//    scanf("%ld", &p1->num);   
//    while(!p1->num)
//    {
//        printf("\n\n输入了非法学号!\n请重新输入：");
//        scanf("%ld", &p1->num); 
//    }
//    printf("请输入学分：");
//    scanf("%f", &p1->score);
//    
//    return head;
//}
//
//struct student *lb_mod(struct student *head)
//{
//    struct student *p1, *p2;
//    long int x =0;
//    p2 = NULL;
//    p1 = head;
//    
//    printf("\n\n请输入一个学号，以便修改该学号节点的属性：");
//    scanf("%ld",&x);
//      
//    do
//    {
//        if(x == p1->num)
//        {
//            p2 = p1;
//            printf("\nThe node you want to mod has been found !\n");
//            break;
//        }
//        if(!p1->next)
//        {
//            printf("\n找不到该学号\n");
//            break;
//        }
//        p1 = p1->next;
//    }while(x != p1->num || p1->next);
//
//    printf("\nPlease input the newer num : ");      //输入节点学号
//    scanf("%ld", &p2->num);
//    while(!p2->num)
//    {
//        printf("\n输入了非法学号!\n请重新输入：");
//        scanf("%ld", &p2->num); 
//    }
//    printf("请输入学分：");
//    scanf("%f", &p2->score);
//    
//    return head;
//}
//
