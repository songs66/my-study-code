#include<stdio.h>
#include<string.h>
int jia(char *x)
{
	int m=strlen(x);
	int sum=0;
	for(int i=0;i<m;i++)
	{
		sum+=(x[i]-'0');
	}
	return sum;
}
int main()
{
	char x[100000];
	while(scanf("%s",&x)!=EOF)
	{
		printf("%d\n",jia(x));
	} 
	
	return 0;
}
