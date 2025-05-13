#include<bits/stdc++.h>
using namespace std;
class person
{
protected:
	string name;
public:
	person(string _name=""):name(_name){}
	virtual void eat()=0;	
};
class student:public person
{
public:
	student(string _name):person(_name){}
	virtual void eat()
	{
		cout<<"I am a student, my name is "<<name<<", I want to have lunch at mess hall!"<<endl; 
	}
};
class teacher:public person
{
public:
	teacher(string _name):person(_name){}
	virtual void eat()
	{
		cout<<"I am a teacher, my name is "<<name<<", I want to eat potato in CHUANWEI restaurant!"<<endl; 
	}
};
class boss:public person
{
public:
	boss(string _name):person(_name){}
	virtual void eat()
	{
		cout<<"I am a boss, my name is "<<name<<", I want to eat fish in GAODIJIE restaurant!"<<endl; 
	}
};
int main()
{
	int choice;
	person *p = NULL;
	string nameValue;
	//cout<<"please input a number(1=student, 2=teacher, 3=boss) .";
	cin>>choice;
	// cout<<"please enter the name.";
	cin>>nameValue;
	if(choice==1)
 		p=new student(nameValue);
	else if(choice==2)
  		p=new teacher(nameValue);
 	else if(choice==3)
   		p=new boss(nameValue);
	p->eat();
	if(p!=NULL) delete p;
	return 0;
}
