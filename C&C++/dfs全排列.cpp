#include<bits/stdc++.h>
using namespace std;
int a[9]={1,2,3,4,5,6,7,8,9};
bool vis[9]={false};
int ans[9];
int n;
void dfs(int k)
{
	if(k==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<setw(5)<<ans[i];
		}
		cout<<endl;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			ans[k]=a[i];
			dfs(k+1);
			vis[i]=false;
		}
	} 
	
}
int main()
{
	cin>>n;
	dfs(0);
	return 0;
 } 
