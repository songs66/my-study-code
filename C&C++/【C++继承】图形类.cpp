#include<bits/stdc++.h>
using namespace std;

class figure
{
protected:
	double height;
	double width;
public:
	figure(double w=0.0,double h=0.0):height(h),width(w){}
};
class rectangle:public figure
{
public:
	rectangle(double w=0.0,double h=0.0):figure(w,h){}
	double area()
	{
		return width*height;
	}
	void display()
	{
		cout<<"I am a rectangle. The value of width is "<<width<<", the height is "<<height<<".";
	}
};
class triangle:public figure
{
public:
	triangle(double w=0.0,double h=0.0):figure(w,h){}
	double area()
	{
		return 0.5*height*width;
	}
	void display()
	{
		cout<<"I am a triangle. The value of width is "<<width<<", the height is "<<height<<".";
	}
};
int main()
{
	double width,height;
	cin>>width>>height;
	triangle tri(width,height);
	rectangle rect(width,height);
	tri.display();
	cout<<"The area is "<<tri.area()<<endl;
	rect.display();
	cout<<"The area is "<<rect.area()<<endl;
	return 0;
}





