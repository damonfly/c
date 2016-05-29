#include <stdio.h>	
#include <string.h>
struct vote
{
    int cang;
    int jia;
    int song;
    int mo;
    void (*count0)(char *na,struct vote x);
    void (*result0)(struct vote y);
};

int main()
{
  int i = 0;
  char *name;
  void count(char *na,struct vote x);
  void result();
  struct vote vot;
  vot.cang=vot.jia=vot.song=vot.mo=0;
  vot.count0=count;
  vot.result0=result;
  printf("欢迎进入良好公民评选投票系统:<>\n\n候选人有:小甲鱼，苍井空，莫丁丁<路人甲>\n\n");
  for(i=1; i<11; i++)
  {
    printf("第 %d  位投票，请写下支持的候选人：", i);
	scanf("%s", name);
	vot.count0(name,vot);
	printf("%s\n", name);
      
    
  }
  vot.result0(vot);
  return 0;
}

void count(char *na, struct vote x)
{
//    if(*na == "小甲鱼")
    if(strcmp(na, "小甲鱼"))
    {
        x.jia++;
    }
    if(strcmp(na, "苍井空"))
    {
        x.cang++;
    }
    if(strcmp(na, "松岛枫"))
    {
        x.song++;
    }
    if(strcmp(na, "莫丁丁") || strcmp(na, "路人甲"))
    {
        x.mo++;
    }
}
void result(struct vote y)
{
    printf("小甲鱼 同学得票数为：%d\n", y.jia );
    printf("苍井空 同学得票数为：%d\n", y.cang);
    printf("松岛枫 同学得票数为：%d\n", y.song);
    printf("莫丁丁 同学得票数为：%d\n", y.mo);
    printf("\n本次投票活动的胜利者是：小甲鱼\n");
}
    

