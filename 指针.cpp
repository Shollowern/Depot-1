/*#include<iostream>//1.ָ��Ķ����ʹ�á� 
using namespace std;//ָ������ã�����ͨ��ָ���ӵķ����ڴ档 
int main()
{
	int a=10;//1.����ָ�롣 
	int *p;//2.ָ�붨����﷨���������� *ָ������� �� 
	p=&a;//3.��ָ���¼����a�ĵ�ַ�� 
	cout<<"a�ĵ�ַΪ��"<<(int)&a<<endl;//��int����ʮ������ת��Ϊʮ���ơ� 
	cout<<"ָ��pΪ��"<<(int)p<<endl;
	*p=1000;//����ָ��Ķ����ʹ�� 
	cout<<"*p="<<(int)p<<endl; //ͨ��"*"����ָ�����ָ����ڴ档 
}*/
#/*include<iostream>//2.ָ����ռ�ڴ�ռ�(ָ��Ҳ�����������ͣ�������������ռ�ö��ٿռ䣿)
using namespace std;
int main()
{
	int a=10; //��64λ�Ĳ���ϵͳ�£�ָ��ռ�õĿռ�Ϊ8���ֽڡ� 
	int *p;//��32λ�Ĳ���ϵͳ�£�ָ��ռ�õĿռ�Ϊ4���ֽڣ�������Ϊ�������͸ı���ı�ռ�õĿռ䡣 
	p=&a;//�������д���������Ĵ������д�ɣ�  int *p=&a; pָ��a�ĵ�ַ�� 
	cout<<*p<<endl;//�����á� 
	cout<<"sizeof(int *)="<<sizeof(p)<<endl;//�������p����д�ɣ�int *����
	cout<<"sizeof(int *)="<<sizeof(int *)<<endl; 
	cout<<"sizeof(int *)="<<sizeof(float *)<<endl; 
	cout<<"sizeof(int *)="<<sizeof(double *)<<endl; 
	cout<<"sizeof(int *)="<<sizeof(char *)<<endl; 
}*/
/*#include<iostream>//3.1��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ䡣 
using namespace std;//��ָ�����ڸ�ָ��������г�ʼ������ָ���ǲ����Խ��з��ʵģ�0~255֮����ڴ�����ϵͳռ�õģ���˲����Է��ʡ��� 
int main()
{
	int *p=NULL;
	cout<<*p<<endl;
}
#include<iostream>//3.2Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ䡣���ڳ����У������������Ұָ�롣�� 
using namespace std;
int main()
{
	int *p=(int *)0x1100;//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ䡣 
	cout<<*p<<endl; //����Ұָ�뱨�� 
} //��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ���ʡ� */
/*#include<iostream>// 4:consy����ָ�룺����������� 
using namespace std;
int main()
{
	int a=10;
	int b=20;
	//4.1 const����ָ��---����ָ��
    const int *p=&a;//�ص㣺ָ���ָ����Ըı䣬����ָ���ֵ�����Ըı䡣
	p=&b; //��ȷ��ָ���ָ����Ըı䡣
	*p=200;����ָ��ָ���ֵ�����Ըı䡣 
    cout<<*p<<endl;
    //4.2 const���γ���---ָ�볣��
	int * const p1=&a;//�ص㣺ָ���ָ�򲻿��Ըı䣬ָ�����ֵ���Ըı䡣 
	//p1=&b;����ָ���ָ�򲻿��Ըı䡣
	*p1=200;//��ȷ��ָ��ָ�����ֵ���Ըı䡣
	cout<<*p1<<endl; 
	//4.3 const�����γ�����������ָ�롣
    const int * const p2=&a;
	cout<<*p2<<endl; //�����������£�ָ���ָ���ָ�����ֵ�������Ըı䡣 
} */
/*#include<iostream>//5.ָ������飺����ָ�����������Ԫ�ء� 
using namespace std;
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	cout<<"�����еĵ�һ��Ԫ��Ϊ��"<<arr[0]<<endl;
	int * p=arr;
	cout<<"����ָ����������еĵ�һ��Ԫ�أ�"<<*p<<endl;//(*p)�����á�
	cout<<"����ѭ�������������Ԫ��Ϊ��"; 
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"   ";
	} 
	cout<<endl<<"����ָ����������е�Ԫ��Ϊ��";
	int *p2=arr;
	for(int i=0;i<10;i++)
	{
		cout<<*p2<<"   ";
		p2++;
	}
} */
/*#include<iostream>//6.ָ��ͺ���������ָ�뺯���������βΣ������޸�ʵ�ε�ֵ�� 
using namespace std;
void swap(int a,int b)//ֵ���� 
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"swap a="<<a<<endl;
	cout<<"swap b="<<b<<endl;
} 
int main()//6.1ֵ���ݣ�����ı�ʵ�� 
{
	int a=10;
	int b=20;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
void swap(int *p1,int *p2)//��ַ���� 
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int main()//6.2��ַ���ݣ���ı�ʵ��
{
	int a=10;
	int b=20;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}*/
#include<iostream>//7.ָ�룬���飬������ 
using namespace std;
void bubbleSort(int *arr,int len)//����������ʵ��ð������ 
{                           //ð�ݺ��� ����1 �����׵�ַ ����2 ���鳤�� 
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void printArray(int *arr,int len)//������ӡ������ʵ������Ĵ�ӡ�� 
{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" "; 
	}
}
int main()
{
	int arr[10]={4,3,6,9,1,2,10,8,7,5};//�ȹ���һ������ �� 
	int len=sizeof(arr)/sizeof(arr[0]);//�������鳤�ȣ����㺯��.���飬ָ�뺯�������á� 
	bubbleSort(arr,len);//����ָ��ð���������� 
	cout<<"��ӡ�����������Ϊ��"<<endl;
	printArray(arr,len);//���ô�ӡ������ʵ�ִ�ӡ����õ����ݡ� 
}
