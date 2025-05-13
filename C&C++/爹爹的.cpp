#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
class complex
{
	public:
		complex(int a=0,int b=0)
		{
			real=a;
			imaginary=b;
		}//初始化 
		void input();//输入 
		void display();//输出 
		complex operator-(const complex& t) const;
		complex operator+(const complex& t) const;
		bool operator==(const complex& t) const;
		bool operator!=(const complex& t) const;
		bool operator<(const complex& t) const;
		bool operator>(const complex& t) const;
		double mo(double a,double b) const;//取模 
	private:
		double real;//实部 
		double imaginary;//虚部 
};
void complex::input()
{
	cin>>real;
	//cin.ignore();
	cin>>imaginary;
	cin.ignore();//吸收字符i 
}
void complex::display()//输出 
{
	if(imaginary>0)
	{
		if(real==0) cout<<fixed<<setprecision(2)<<imaginary<<"i"<<endl;
		else
		cout<<fixed<<setprecision(2)<<real<<"+"<<fixed<<setprecision(2)<<imaginary<<"i"<<endl;
	}
	else
	{
		if(imaginary<0)
		{
			if(real==0) cout<<fixed<<setprecision(2)<<imaginary<<"i"<<endl;
			else
			{
				imaginary=0-imaginary;
				cout<<fixed<<setprecision(2)<<real<<"-"<<fixed<<setprecision(2)<<imaginary<<"i"<<endl;
			}
		}
		else
		{
			if(real==0) cout<<"0.00"<<endl;
			else cout<<fixed<<setprecision(2)<<real<<endl;
		}
	}
	
}
complex complex::operator-(const complex& t) const
{
	complex temp;
	temp.real=(*this).real-(t.real);
	temp.imaginary=(*this).imaginary-t.imaginary;
	return temp;
}
complex complex::operator+(const complex& t) const
{
	complex temp;
	temp.real=(*this).real+t.real;
	temp.imaginary=(*this).imaginary+t.imaginary;
	return temp;
}
double complex::mo(double a,double b) const 
{
	double sum;
	sum=sqrt(a*a+b*b);
	return sum;
}
bool complex::operator==(const complex& t) const
{
	double a,b;
	a=mo((*this).real,(*this).imaginary);
	b=mo(t.real,t.imaginary);
	if(a==b) return true;
	else return false;
}
bool complex::operator!=(const complex& t) const
{
	double a,b;
	a=mo((*this).real,(*this).imaginary);
	b=mo(t.real,t.imaginary);
	if(a!=b) return true;
	else return false;
}
bool complex::operator<(const complex& t) const
{
	double a,b;
	a=mo((*this).real,(*this).imaginary);
	b=mo(t.real,t.imaginary);
	if(a<b) return true;
	else return false;
}
bool complex::operator>(const complex& t) const
{
	double a,b;
	a=mo((*this).real,(*this).imaginary);
	b=mo(t.real,t.imaginary);
	if(a>b) return true;
	else return false;
}
int main()
{
	complex c1,c2,c3,c4,c5;
	c1.input();
	c2.input();
	c3=c1+c2;
	c4=c1-c2;
	c1.display();
	c2.display();
	if(c3!=c4)
	{
		if(c3<c4)
		{
			cout<<"c3 is less than c4";
			c5=c4-c3;
		}
		if(c3>c4)
		{
			cout<<"c3 is greater than c4";
			c5=c3-c4;
		}
	}
	if(c3==c4)
	{
		cout<<"c3 and c4 are equal";
		c5=c4;
	}
	cout<<endl;
	c5.display();
	return 0;
}
