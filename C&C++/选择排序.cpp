#include<stdio.h>
int main()
{
	int i,k,j,s[5],temp,flag;
	for(i=0;i<5;i++)
	scanf("%d",&s[i]);
	for(i=0;i<5-1;i++)
	{
		k=i;
		for(j=i+1;j<5;j++)
		{
			if(s[j]>s[k])
			k=j;
		}
		if(k!=i)
		{
			temp=s[k];
			s[k]=s[i];
			s[i]=temp;
		}
	}
	for(i=0;i<5;i++)
	printf("%d ",s[i]);
	return 0;
}
