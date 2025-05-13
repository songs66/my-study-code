#include<bits/stdc++.h>
using namespace std;

int num;
char x[101][101];
bool vis[101][101]={false};
bool isright[101][101]={false};
char righ[8]="yizhong";

bool init(int m,int n)
{
	if(n>num-1||m>num-1||n<0||m<0)
		return false;
	else
		return true;
}
bool sim(char a[],char b[])
{
	for(int i=0;i<7;i++)
	{
		if(a[i]==b[i])
			return true;
		else
			return false;
	}
}

char temp[8];
int tt[7][2];

void dfs(int m,int n,int no)
{

	temp[no]=x[m][n];
	tt[no][0]=m;
	tt[no][1]=n;
	
	if(no==6)
	{
		if(sim(temp,righ))
		{
			for(int i=1;i<8;i++)
			{
				isright[tt[i][0]][tt[i][1]]=true;
			}	
	}
		return;
	}
		
	else
	{
		if(init(m,n)&&vis[m][n]==false)
		{
			vis[m][n]=true;
			dfs(m,n,no+1);
			vis[m][n]=false;
		}
		if(init(m+1,n)&&vis[m+1][n]==false)
		{
			vis[m+1][n]=true;
			dfs(m+1,n,no+1);
			vis[m+1][n]=false;
		}
		if(init(m+1,n+1)&&vis[m+1][n+1]==false)
		{
			vis[m+1][n+1]=true;
			dfs(m+1,n+1,no+1);
			vis[m+1][n+1]=false;
		}
		if(init(m+1,n-1)&&vis[m+1][n-1]==false)
		{
			vis[m+1][n-1]=true;
			dfs(m+1,n-1,no+1);
			vis[m+1][n-1]=false;
		}
		if(init(m-1,n)&&vis[m-1][n]==false)
		{
			vis[m-1][n]=true;
			dfs(m-1,n,no+1);
			vis[m-1][n]=false;
		}
		if(init(m-1,n+1)&&vis[m-1][n+1]==false)
		{
			vis[m-1][n+1]=true;
			dfs(m-1,n+1,no+1);
			vis[m-1][n+1]=false;
		}
		if(init(m-1,n-1)&&vis[m-1][n-1]==false)
		{
			vis[m-1][n-1]=true;
			dfs(m-1,n-1,no+1);
			vis[m-1][n-1]=false;
		}
		if(init(m,n+1)&&vis[m][n+1]==false)
		{
			vis[m][n+1]=true;
			dfs(m,n+1,no+1);
			vis[m][n+1]=false;
		}
		if(init(m,n-1)&&vis[m][n-1]==false)
		{
			vis[m][n-1]=true;
			dfs(m,n-1,no+1);
			vis[m][n-1]=false;
		}
		return;
	}
}

int main() 
{
    cin>>num;
    for(int i=0;i<num;i++)
    {
    	cin>>x[i];
	}
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(x[i][j]=='y')
				dfs(i,j,0);
		}
	}
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(!isright[i][j])
				x[i][j]='*';
		}
	}
	for(int i=0;i<num;i++)
    {
    	cout<<x[i]<<endl;
	}
    return 0;
}
