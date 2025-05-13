#include<bits/stdc++.h>
using namespace std;
 
class point
{
private:
    int m;
    int n;
public:
    point(int a=0,int b=0):m(a),n(b){}
    point operator+(point t)
    {
        return point(m+t.m,n+t.n);
    }
    point operator-(point t)
    {
        return point(m-t.m,n-t.n);
    }
    void input()
    {
        cin>>m>>n;
    }
    void output()
    {
        cout << "(" << m << "," << n << ")" << endl;
    }
};
int main()
{
    point t1,t2;
    t1.input();
    t2.input();
    point a=t1+t2;
    a.output();
    point b=t1-t2;
    b.output();
    return 0;
}

