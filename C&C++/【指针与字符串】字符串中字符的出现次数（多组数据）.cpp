#include<stdio.h>
int tongji(char *p,char ch)
{
	int count=0;
	while(*p!='\0')
	{
		if(*p==ch)
		count++;
		p++;
	}
	return count;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char ch,x[200];
		getchar();
		gets(x);
		scanf("%c",&ch);
		printf("%d\n",tongji(x,ch));
	}
	return 0;
}

