#include<bits/stdc++.h>
using namespace std;
class Worker
{
protected:
	string name;
public:
	Worker(string _name=""):name(_name){}
	void virtual printInfo()=0;
}; 
class AWorker:public Worker
{
private:
	int salary;
public:
	AWorker(string _name,int _salary):Worker(_name),salary(_salary){}
	virtual void printInfo()
	{
		cout<<name<<" "<<salary<<endl;
	}
};
class BWorker:public Worker
{
private:
	int num;
	int single_sal;
public:
	BWorker(string _name,int _num,int _single_sal):Worker(_name),num(_num),single_sal(_single_sal){}
	virtual void printInfo()
	{
		cout<<name<<" "<<num*single_sal<<endl;
	}
};
class CWorker:public Worker
{
private:
	int salary;
	int bonus;
public:
	CWorker(string _name,int _salary,int _bonus):Worker(_name),salary(_salary),bonus(_bonus){}
	virtual void printInfo()
	{
		cout<<name<<" "<<salary+bonus<<endl;
	}
};
int main()
{
	Worker* w = NULL;
    string name;
    int salary;
    cin >> name >> salary;
    w = new AWorker(name, salary);
    w->printInfo();
    delete w;

    int num, single_sal; // 数量，单件工资
    cin >> name >> num >> single_sal;
    w = new BWorker(name, num, single_sal);
    w->printInfo();
    delete w;
    
    int bonus;
    cin >> name >> salary >> bonus; // 工资、奖金
    w = new CWorker(name, salary, bonus);
    w->printInfo();
    delete w;
    return 0;
}
