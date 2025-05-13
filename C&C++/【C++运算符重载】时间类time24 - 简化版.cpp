#include<bits/stdc++.h>
using namespace std;
class time24
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	time24(int h=0,int m=0,int s=0):hours(h),minutes(m),seconds(s){}
	time24 operator+(int sec)
	{
		int total_seconds=hours*3600+minutes*60+seconds+sec;
		return normalize(total_seconds);
	}
	time24& operator++()
	{
		int total_seconds=hours*3600+minutes*60+seconds+1;
		hours= (total_seconds / 3600)%24;
        minutes= (total_seconds % 3600) / 60;
        seconds= total_seconds % 60;
		return *this;
	}
	time24 operator++(int)
	{
		time24 temp=*this;
		int total_seconds=hours*3600+minutes*60+seconds+1;
		hours= (total_seconds / 3600)%24;
        minutes= (total_seconds % 3600) / 60;
        seconds= total_seconds % 60;
		return temp;
	}
	bool operator==(time24 t)
	{
		if(hours==t.hours&&minutes==t.minutes&&seconds==t.seconds)
			return true;
		return false;
	}
	friend ostream& operator<<(ostream& os,time24& t)
	{
		os<< setw(2) << setfill('0')<<t.hours<<":"
		    << setw(2) << setfill('0')<<t.minutes<<":"
			<< setw(2) << setfill('0')<<t.seconds<<endl;
		return os;
	 } 
	friend istream& operator>>(istream& is,time24& t)
	{
		is>>t.hours>>t.minutes>>t.seconds;
		return is;
	}
	time24 normalize(int total_seconds) 
	{
        int h = total_seconds / 3600;
        int m = (total_seconds % 3600) / 60;
        int s = total_seconds % 60;
        return time24(h % 24, m, s);
    }
};
int main()
{
	time24 t1, t2, t3, t4;
    cin>>t1;
    t2=t1+4;
    t3=t1++;
    t4=++t1;
    if (t3 == t4)
        cout << "t3 == t4" << endl;
    else
        cout << "t3 != t4" << endl;
    cout<<t2<<t3<<t4;
	return 0;
}
