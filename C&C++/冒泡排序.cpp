#include<stdio.h>
int main()
{
	int i,j,s[5],temp,flag;
	for(i=0;i<5;i++)
	scanf("%d",&s[i]);
	
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=0;j<5-i-1;j++)
		{	
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	
	for(i=0;i<5;i++)
	printf("%d ",s[i]);
	return 0;
}
