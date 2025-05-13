#include<bits/stdc++.h>
using namespace std;
class complex1
{
private:
	double real;
	double imaginary;
public:
	complex1(int a=0,int b=0):real(a),imaginary(b){}
	complex1 operator+(complex1 t)
	{
		return complex1(real+t.real,imaginary+t.imaginary);
	}
	complex1 operator-(complex1 t)
	{
		return complex1(real-t.real,imaginary-t.imaginary);
	}
	bool operator==(complex1 t)
	{
		if(real==t.real&&imaginary==t.imaginary)
			return true;
		return false;
	}
	bool operator!=(complex1 t)
	{
		if(real==t.real&&imaginary==t.imaginary)
			return false;
		return true;
	}
	bool operator<(complex1 t)
	{
		if(real*real+imaginary*imaginary<t.real*t.real+t.imaginary*t.imaginary)
			return true;
		return false;
	}
	bool operator>(complex1 t)
	{
		if(real*real+imaginary*imaginary>t.real*t.real+t.imaginary*t.imaginary)
			return true;
		return false;
	}
	friend istream& operator>>(istream& is,complex1& t)
	{
		char c1,c2;
		is>>t.real>>c1>>t.imaginary>>c2;
		if(c1=='-')
			t.imaginary=0-t.imaginary;
		return is;
	}
	friend ostream& operator<<(ostream& os,complex1& t)
	{
		if(t.imaginary==0)
			os<<fixed<<setprecision(2)<<t.real<<endl;
		else if(t.imaginary<0)
			os<<fixed<<setprecision(2)<<t.real<<t.imaginary<<"i"<<endl;
		else
			os<<fixed<<setprecision(2)<<t.real<<"+"<<t.imaginary<<"i"<<endl; 
		return os;
	}
};
int main()
{
	complex1 c1, c2, c3, c4, c5 ;
	cin>>c1>>c2;
	c3 = c1 + c2 ;
	c4 = c1 - c2 ;
	if ( c3 != c4 )
	{
		if (c3 < c4)
		{
			cout << "c3 is less than c4" ;
			c5 = c4 - c3 ;
		}
		if ( c3 > c4 )
		{
			cout << "c3 is greater than c4" ;
			c5 = c3 - c4 ;
		}
	}
	if ( c3 == c4 )
	{
		cout << "c3 and c4 are equal";
		c5 = c4 ;
	}
	cout<<endl;
	cout<<c5;
	return 0;
}
