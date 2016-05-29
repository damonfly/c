//#include <stdio.h>
//#include <string.h>
//struct vote
//{
//    int cang;
//    int jia;
//    int song;
//    int mo;
//} vot = {0, 0, 0, 0};
//
//int main()
//{
//    int i = 0;
//    char name[10];
//    struct vote *x;
//    x =&vot;
//    
//    int count1(char *nam,struct vote *x);
//    void result(struct vote *y);
//    
//    printf("%d\n",strcmp("a","a"));
//    
//    printf("欢迎进入良好公民评选投票系统:<>\n\n候选人有:小甲鱼，苍井空，莫丁丁<路人甲>\n\n");
//    for(i=1; i<11; i++)
//    {
//        printf("第 %d  位投票，请写下支持的候选人：", i);
//        scanf("%s", name);
//       
//        if(!strcmp(name, "小甲鱼"))
//        {
//            x->jia+=1;
//            printf("%d\n",x->cang);
//            printf("%d\n",x->jia);
//            printf("%d\n",x->song);
//            printf("%d\n",x->mo);
//        }
//        if(!strcmp(name, "苍井空"))
//        {
//            x->cang+=1;
//            printf("%d\n",x->cang);
//            printf("%d\n",x->jia);
//            printf("%d\n",x->song);
//            printf("%d\n",x->mo);
//        }
//        if(!strcmp(name, "松岛枫"))
//        {
//            x->song+=1;
//            printf("%d\n",x->cang);
//            printf("%d\n",x->jia);
//            printf("%d\n",x->song);
//            printf("%d\n",x->mo);
//        }
//        if(!strcmp(name, "莫丁丁") || !strcmp(name, "路人甲"))
//        {
//            x->mo+=1;
//            printf("%d\n",x->cang);
//            printf("%d\n",x->jia);
//            printf("%d\n",x->song);
//            printf("%d\n",x->mo); 
//        }
//            printf("%s\n", name);
//        }
//    result(&vot);
//    return 0;
//}
//
//// int count1(char *nam, struct vote *x)
//// {
////     if(strcmp(nam, "小甲鱼"))
////     {
////         x->jia++;
////         return 0;     
////     }
////     if(strcmp(nam, "苍井空"))
////     {
////         x->cang++;
////         return 0;
////     }
////     if(strcmp(nam, "松岛枫"))
////     {
////         x->song++;
////          return 0;    
////     }
////     if(strcmp(nam, "莫丁丁") || strcmp(nam, "路人甲"))
////     {
////         x->mo++; 
////          return 0;   
////     }
////     return 0;
//// }
//void result(struct vote *y)
//{
//    printf("小甲鱼 同学得票数为：%d\n", y->jia );
//    printf("苍井空 同学得票数为：%d\n", y->cang);
//    printf("松岛枫 同学得票数为：%d\n", y->song);
//    printf("莫丁丁 同学得票数为：%d\n", y->mo);
//    printf("\n本次投票活动的胜利者是：小甲鱼\n");
//}
//
//
//
//
//
