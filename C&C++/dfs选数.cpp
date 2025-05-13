#include<bits/stdc++.h>
using namespace std;

int ans=0;
int n;
int k;
int x[21];
bool vis[21]={false};

bool isprime(int x)
{
	if(x==1)
		return false;
	for(int i=2;i*i<x;i++)
	{
		if(x%i==0)
			return false;
	}
	return  true;
}
void dfs(int q,int start,int sum)
{
	if(q==k)
	{
		if(isprime(sum))
			ans++;
		return;
	}
	for(int i=start;i<n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(q+1,i+1,sum+x[i]);
			vis[i]=false;
		}
	}
}

int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	dfs(0,0,0);
	cout<<ans;
	return 0;
}
