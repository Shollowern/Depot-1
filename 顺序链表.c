/*#include<stdio.h>//1.数据结构中用于顺序表的删除和插入。 
#define MAXSIZE 100
typedef struct node//类型重定义。 
{
	int date[MAXSIZE];
	int length;
}node;
void init(node*L)//初始化函数。 
{
	L->length=0;
}
void insert(node*L,int i,int date)//插入函数。 
{
	int k;
	if(i<1||i>L->length+1)
	    printf("插入失败");
	else
	{
		for(k=L->length-1;k>i-1;k--)
		{
			L->date[k+1]=L->date[k];
		}
		L->date[i-1]=date;
		L->length++;
		printf("插入成功\n"); 
	}
	
}
void delete(node*L,int i)//删除函数。 
{
	int k;
	if(i<1||i>L->length)
	printf("删除出错\n");
	else
	{
		for(k=i;k<=L->length-1;k++)
		{
			L->date[k-1]=L->date[k];
		}
		L->length--;
		printf("删除成功\n");
	}
}
void printfl(node*L)//顺序表输出函数。 
{
	for(int i=0;i<L->length;i++)
	printf(" %d  ",L->date[i]);
}
int main()
{
	node L;
	init(&L);
	printf("初始化成功\n");
	insert(&L,1,11);//在第一个位置插入11.
	insert(&L,2,22);
	insert(&L,3,33);
	insert(&L,4,44);
	insert(&L,5,66);
	delete(&L,2);
	insert()
	printfl(&L);
	return 0;
}*/
#include<stdio.h>//2.数据结构 三要素：逻辑结构 数据的运算 物理结构（存储结构） 
#define MAXSIZE 100
typedef struct  SeqList//定义一个结构体。 
{
	int elem[MAXSIZE];
	int last;
}SeqList; 
void InitList(SeqList * Lp)//初始化 
{
  for(int i=0;i<MAXSIZE;i++)
      Lp->elem[i]=0;
  Lp->last=0;
}
int InsertList(SeqList*Lp,int i,int x)//定义插入操作的函数 
{
	int j;
	if(Lp->last==MAXSIZE-1)
	{
		printf("表满");
		return(-1); 
	} 
	if(i<1||i>Lp->last+2)
	{
		printf("位置错误");
        return (0);
	}
	for(j=Lp->last;j>i-1;j--)
	   Lp->elem[j+1]=Lp->elem[j];
	Lp->elem[i-1]=x;
	Lp->last++;
	return (1);
}
int DeleteList(SeqList*Lp,int i)
{
	int j;
	if(i<1||i>Lp->last+1)
	{
		printf("不存在第i个元素");
		return (0);
	}
	for(j=i;j<Lp->last;j++)
	  Lp->elem[j-1]=Lp->elem[j];
	Lp->last--;
	return (1);
}
void printfloat(SeqList * Lp)
{
	for(int i=0;i<Lp->last;i++)
	printf("  %d   ",Lp->elem[i]);
}
int main()//InitList(&L)初始化 分配内存空间  InsertList(L,i,x)插入操作 DeleteList（L，i）删除操作 
{
	SeqList Lp;
	InitList(&Lp);
	InsertList(&Lp,1,11);
	InsertList(&Lp,2,22);
	InsertList(&Lp,3,33);
	DeleteList(&Lp,5);
	printfloat(&Lp);
	return 0;
}
