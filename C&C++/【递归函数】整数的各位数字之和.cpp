#include<stdio.h>
int he(int n)
{
	if(n<10)
		return n;
	else
		return n%10+he(n/10);
}
int main() 
{
	int n;
	while(scanf("%d",&n)!=EOF)
	printf("%d\n",he(n));
	return 0;
 }
