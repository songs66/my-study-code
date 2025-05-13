#include<bits/stdc++.h>
using namespace std;

bool isgood(long long int a) 
{
    bool oddPosition = true; 
    while (a > 0) 
	{
        long long int digit = a % 10;
        a /= 10;
        if ((oddPosition && digit % 2 == 0) || (!oddPosition && digit % 2 != 0)) 
		{
            return false;
        }
        oddPosition = !oddPosition;
    }
    return true;
}

int main()
{
	long long int n;
	cin>>n;
	int ans=0;
	for(long long int i=1;i<=n;i++)
	{
		if(isgood(i))
			ans++;
	}
	cout <<ans;
	return 0;
}
