/*#include<iostream>//1.指针的定义和使用。 
using namespace std;//指针的作用：可以通过指针间接的访问内存。 
int main()
{
	int a=10;//1.定义指针。 
	int *p;//2.指针定义的语法：数据类型 *指针变量名 ； 
	p=&a;//3.让指针记录变量a的地址。 
	cout<<"a的地址为："<<(int)&a<<endl;//加int是让十六进制转换为十进制。 
	cout<<"指针p为："<<(int)p<<endl;
	*p=1000;//二：指针的定义和使用 
	cout<<"*p="<<(int)p<<endl; //通过"*"操作指针变量指向的内存。 
}*/
#/*include<iostream>//2.指针所占内存空间(指针也是种数据类型，这种数据类型占用多少空间？)
using namespace std;
int main()
{
	int a=10; //在64位的操作系统下，指针占用的空间为8个字节。 
	int *p;//在32位的操作系统下，指针占用的空间为4个字节，不会因为数据类型改变而改变占用的空间。 
	p=&a;//上面那行代码与下面的代码可以写成：  int *p=&a; p指向a的地址。 
	cout<<*p<<endl;//解引用。 
	cout<<"sizeof(int *)="<<sizeof(p)<<endl;//括号里的p可以写成（int *）。
	cout<<"sizeof(int *)="<<sizeof(int *)<<endl; 
	cout<<"sizeof(int *)="<<sizeof(float *)<<endl; 
	cout<<"sizeof(int *)="<<sizeof(double *)<<endl; 
	cout<<"sizeof(int *)="<<sizeof(char *)<<endl; 
}*/
/*#include<iostream>//3.1空指针：指针变量指向内存中编号为0的空间。 
using namespace std;//空指针用于给指针变量进行初始化。空指针是不可以进行访问的（0~255之间的内存编号是系统占用的，因此不可以访问。） 
int main()
{
	int *p=NULL;
	cout<<*p<<endl;
}
#include<iostream>//3.2野指针：指针变量指向非法的内存空间。（在程序中，尽量避免出现野指针。） 
using namespace std;
int main()
{
	int *p=(int *)0x1100;//指针变量p指向内存地址编号为0x1100的空间。 
	cout<<*p<<endl; //访问野指针报错。 
} //空指针和野指针都不是我们申请的空间，因此不要访问。 */
/*#include<iostream>// 4:consy修饰指针：有三种情况。 
using namespace std;
int main()
{
	int a=10;
	int b=20;
	//4.1 const修饰指针---常量指针
    const int *p=&a;//特点：指针的指向可以改变，但是指向的值不可以改变。
	p=&b; //正确；指针的指向可以改变。
	*p=200;错误；指针指向的值不可以改变。 
    cout<<*p<<endl;
    //4.2 const修饰常量---指针常量
	int * const p1=&a;//特点：指针的指向不可以改变，指向的数值可以改变。 
	//p1=&b;错误；指针的指向不可以改变。
	*p1=200;//正确；指针指向的数值可以改变。
	cout<<*p1<<endl; 
	//4.3 const既修饰常量，又修饰指针。
    const int * const p2=&a;
	cout<<*p2<<endl; //在这种类型下，指针的指向和指向的数值都不可以改变。 
} */
/*#include<iostream>//5.指针和数组：利用指针访问数组中元素。 
using namespace std;
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	cout<<"数组中的第一个元素为："<<arr[0]<<endl;
	int * p=arr;
	cout<<"利用指针访问数组中的第一个元素："<<*p<<endl;//(*p)解引用。
	cout<<"利用循环语句访问数组的元素为："; 
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"   ";
	} 
	cout<<endl<<"利用指针访问数组中的元素为：";
	int *p2=arr;
	for(int i=0;i<10;i++)
	{
		cout<<*p2<<"   ";
		p2++;
	}
} */
/*#include<iostream>//6.指针和函数：利用指针函数作函数形参，可以修改实参的值。 
using namespace std;
void swap(int a,int b)//值传递 
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"swap a="<<a<<endl;
	cout<<"swap b="<<b<<endl;
} 
int main()//6.1值传递：不会改变实参 
{
	int a=10;
	int b=20;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
void swap(int *p1,int *p2)//地址传递 
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int main()//6.2地址传递：会改变实参
{
	int a=10;
	int b=20;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}*/
#include<iostream>//7.指针，数组，函数， 
using namespace std;
void bubbleSort(int *arr,int len)//创建函数，实现冒泡排序。 
{                           //冒泡函数 参数1 数组首地址 参数2 数组长度 
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
void printArray(int *arr,int len)//构建打印函数，实现数组的打印。 
{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" "; 
	}
}
int main()
{
	int arr[10]={4,3,6,9,1,2,10,8,7,5};//先构建一个数组 。 
	int len=sizeof(arr)/sizeof(arr[0]);//定义数组长度，方便函数.数组，指针函数的引用。 
	bubbleSort(arr,len);//调用指针冒泡排序函数。 
	cout<<"打印后得数组排序为："<<endl;
	printArray(arr,len);//调用打印函数，实现打印排序好的数据。 
}
