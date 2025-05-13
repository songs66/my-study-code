#include<stdio.h>
int fact(int x)
{
	if(x<=1)
	return x;
	else
	x=x*fact(x-1);
	return x;
}
int main()
{
	int k,m,n; 
	while(scanf("%d %d %d",&k,&m,&n)!=EOF)
	{
		printf("%f\n",fact(k)*1.0/(fact(m)*1.0+fact(n)*1.0));
	}
	
	return 0;
 } 
