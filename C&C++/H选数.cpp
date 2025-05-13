#include<bits/stdc++.h>
using namespace std;

int m[21],ans= 0;
bool vis[21]={false};
bool isprime(int x) 
{
    if(x==1)
		return false;
    for (int i=2;i*i<=x;i++) 
	{
        if(x%i==0)
			return false;
    }
    return true;
}
void dfs(int selected,int n,int sum,int start,int k) 
{
    if(selected==k) 
	{
        if(isprime(sum))
			ans++;
        return;
    }
    for(int i=start;i<n;i++) 
	{
        if (!vis[i]) 
		{
            vis[i]=true;
            dfs(selected+1,n,sum+m[i],i+1,k); 
            vis[i]=false; 
        }
    }
}
int main() 
{
    int k,n;
    cin>>n>>k;
    for(int i=0;i<n;i++) 
	{
        cin>>m[i];
    }
    dfs(0,n,0,0,k);
    cout<<ans<<endl;
    return 0;
}
