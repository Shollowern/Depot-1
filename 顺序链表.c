/*#include<stdio.h>//1.���ݽṹ������˳����ɾ���Ͳ��롣 
#define MAXSIZE 100
typedef struct node//�����ض��塣 
{
	int date[MAXSIZE];
	int length;
}node;
void init(node*L)//��ʼ�������� 
{
	L->length=0;
}
void insert(node*L,int i,int date)//���뺯���� 
{
	int k;
	if(i<1||i>L->length+1)
	    printf("����ʧ��");
	else
	{
		for(k=L->length-1;k>i-1;k--)
		{
			L->date[k+1]=L->date[k];
		}
		L->date[i-1]=date;
		L->length++;
		printf("����ɹ�\n"); 
	}
	
}
void delete(node*L,int i)//ɾ�������� 
{
	int k;
	if(i<1||i>L->length)
	printf("ɾ������\n");
	else
	{
		for(k=i;k<=L->length-1;k++)
		{
			L->date[k-1]=L->date[k];
		}
		L->length--;
		printf("ɾ���ɹ�\n");
	}
}
void printfl(node*L)//˳������������ 
{
	for(int i=0;i<L->length;i++)
	printf(" %d  ",L->date[i]);
}
int main()
{
	node L;
	init(&L);
	printf("��ʼ���ɹ�\n");
	insert(&L,1,11);//�ڵ�һ��λ�ò���11.
	insert(&L,2,22);
	insert(&L,3,33);
	insert(&L,4,44);
	insert(&L,5,66);
	delete(&L,2);
	insert()
	printfl(&L);
	return 0;
}*/
#include<stdio.h>//2.���ݽṹ ��Ҫ�أ��߼��ṹ ���ݵ����� ����ṹ���洢�ṹ�� 
#define MAXSIZE 100
typedef struct  SeqList//����һ���ṹ�塣 
{
	int elem[MAXSIZE];
	int last;
}SeqList; 
void InitList(SeqList * Lp)//��ʼ�� 
{
  for(int i=0;i<MAXSIZE;i++)
      Lp->elem[i]=0;
  Lp->last=0;
}
int InsertList(SeqList*Lp,int i,int x)//�����������ĺ��� 
{
	int j;
	if(Lp->last==MAXSIZE-1)
	{
		printf("����");
		return(-1); 
	} 
	if(i<1||i>Lp->last+2)
	{
		printf("λ�ô���");
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
		printf("�����ڵ�i��Ԫ��");
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
int main()//InitList(&L)��ʼ�� �����ڴ�ռ�  InsertList(L,i,x)������� DeleteList��L��i��ɾ������ 
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
