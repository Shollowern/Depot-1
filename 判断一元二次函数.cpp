#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,d,e,de,di;
	cout<<"����һԪ���η��̵�ϵ��:a,b,c"<<endl;
	cin>>a>>b>>c;
	if(a==0)
	{
		cout<<"����ϵ�����ܹ���һԪ���εķ���"<<endl;
	}
	else
	{
		d=b*b-4*a*c;
		e=abs(d);
		de=sqrt(d);
		di=sqrt(e);
		if(d==0)
		{
			cout<<"������������ͬ��ʵ���⣺\n"<<-b/(2*a)<<endl;
		}
		else
		{
			if(d>0)
			{
				cout<<"������������ͬ�Ľ�:\n"<<(-b+de)/(2*a)<<" "<<(-b-de)/(2*a)<<endl;
			}
			else
			{
				cout<<"������������ͬ�ĸ��⣺\n"<<(-b)/(2*a)<<"+"<<di/(2*a)<<"i"<<" "<<(-b)/(2*a)<<"+"<<"di/(2*a)"<<"i"<<endl;
			}
			}
	}
	return 0;
}
