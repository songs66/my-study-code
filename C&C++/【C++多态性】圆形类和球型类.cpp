#include<bits/stdc++.h>
using namespace std;
class circle
{
protected:
	double r;
public:
	circle(double _r=0):r(_r)
	{
		cin>>r;
	}
	virtual double area()
	{
		return 3.14*r*r;
	}
	void area_message(string str)
	{
		cout<<str<<fixed<<setprecision(2)<<area()<<endl;
	}
};
class sphere:public circle
{
public:
	virtual double area()
	{
		return 4*3.14*r*r;
	} 
	void area_message(string str)
	{
		cout<<str<<fixed<<setprecision(2)<<area()<<endl;
	}
};
int main()
{
	circle *p;
    circle c;
    p = &c;
    p->area_message("The area of circle is ");

    sphere s;
    p = &s;
    p->area_message("The area of sphere is ");
	return 0;
}
