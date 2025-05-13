#include<stdio.h>
int high(int *p)
{
	if(*p<10)
	return *p;
	else
	*p=*p/10;
	return high(p);
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",high(&n));
	}
	return 0;
}
