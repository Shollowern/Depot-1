#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,d,e,de,di;
	cout<<"输入一元二次方程的系数:a,b,c"<<endl;
	cin>>a>>b>>c;
	if(a==0)
	{
		cout<<"输入系数不能构成一元二次的方程"<<endl;
	}
	else
	{
		d=b*b-4*a*c;
		e=abs(d);
		de=sqrt(d);
		di=sqrt(e);
		if(d==0)
		{
			cout<<"方程有两个相同的实数解：\n"<<-b/(2*a)<<endl;
		}
		else
		{
			if(d>0)
			{
				cout<<"方程有两个不同的解:\n"<<(-b+de)/(2*a)<<" "<<(-b-de)/(2*a)<<endl;
			}
			else
			{
				cout<<"方程有两个不同的复解：\n"<<(-b)/(2*a)<<"+"<<di/(2*a)<<"i"<<" "<<(-b)/(2*a)<<"+"<<"di/(2*a)"<<"i"<<endl;
			}
			}
	}
	return 0;
}
