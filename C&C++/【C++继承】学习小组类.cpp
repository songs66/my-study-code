#include<bits/stdc++.h>
using namespace std;
class student
{
private:
	string name;
	int age;
	double score;
public:
	student()
	{
		cin>>name>>age>>score;
	}
	void display()
	{
		cout<<name<<" "<<age<<" "<<score<<endl;
	}
	double displayscore()
	{
		return score;
	}
};
class team
{
private:
	student students[3];
public:
	void display()
	{
		for(int i=0;i<3;i++)
		{
			students[i].display();
		}
	}
	void top()
	{
		int max=0;
		int flag;
		for(int i=0;i<3;i++)
		{
			if(students[i].displayscore()>max)
			{
				max=students[i].displayscore();
				flag=i;
			}
		}
		students[flag].display();
	}
	double average()
	{
		return (students[0].displayscore()+students[1].displayscore()+students[2].displayscore())/3;
	}
};
int main()
{
	team t1;
    cout << "Team information:" << endl;
    t1.display();
    cout << "Top student information:" << endl;
    t1.top();
    cout << "Average score:" << endl;
    cout << fixed << setprecision(2);
    float avg = t1.average();
    cout << avg << endl;
    return 0;
}
