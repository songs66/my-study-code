#include<stdio.h>
int f(int n)
{
	if(n<=2)
	return 1;
	else
	return f(n-2)+f(n-1);
}
int main() 
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%8d",f(i));
	}
	return 0;
 }
