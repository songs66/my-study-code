#include <bits/stdc++.h>
using namespace std;
class time24 
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    time24(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    time24 operator+(int secs)
	{
        int total_seconds = hours * 3600 + minutes * 60 + seconds + secs;
        return normalize(total_seconds);
    }
    time24 operator+(time24 t)
	{
        int total_seconds = hours * 3600 + minutes * 60 + seconds + t.hours * 3600 + t.minutes * 60 + t.seconds;
        return normalize(total_seconds);
    }
    time24 operator-(int secs)
	{
        int total_seconds = hours * 3600 + minutes * 60 + seconds - secs;
        return normalize(total_seconds);
    }
    time24 operator-(time24 t) 
	{
        int total_seconds = hours * 3600 + minutes * 60 + seconds - (t.hours * 3600 + t.minutes * 60 + t.seconds);
        return normalize(total_seconds);
    }
    void input() 
	{
        cin >> hours >> minutes >> seconds;
    }
    void display()
	{
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << endl;
    }
    time24 normalize(int total_seconds) 
	{
        int h = total_seconds / 3600;
        int m = (total_seconds % 3600) / 60;
        int s = total_seconds % 60;
        return time24(h % 24, m, s);
    }
};
time24 operator+(int secs,time24 t) 
{
    return t + secs;
}

int main() 
{
    time24 t1, t2, t3, t4;
    t1.input();
    t2 = t1 + 4;
    t3 = t1 + t2;

    t4 = 5 + t1;

    t2.display();
    t3.display();
    t4.display();

    t2 = t1 - 4;
    t3 = t1 - t2;

    t2.display();
    t3.display();

    return 0;
}
