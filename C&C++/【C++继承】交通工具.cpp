#include<bits/stdc++.h>
using namespace std;
class vehicle
{
protected:
	int id;
	string name;
public:
	vehicle(int _id,string _name):id(_id),name(_name){}
	void display()
	{
		cout<<"vehicleID="<<id<<" "<<"vehicleName="<<name<<endl;
	}
};
class bike:public vehicle
{
private:
	int weight;
public:
	bike(int _id,string _name,int _weight):vehicle(_id,_name),weight(_weight){}
	void display()
	{
		cout<<"vehicleID="<<id<<" "<<"vehicleName="<<name<<" "<<"weight="<<weight<<endl;
	}
};
int main()
{
	int ID;
	string name;
	int weight;
	cin>>ID>>name;
	vehicle vehicle1(ID,name);
	vehicle1.display();
	cout<<endl;
	cin>>ID>>name>>weight;
	bike bike1(ID,name,weight);
	bike1.display();
	cout<<endl;
    return 0;
}




