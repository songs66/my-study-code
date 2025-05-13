#include<stdio.h>
int main()
{
	int x[20],n,i,j,temp;
	while(scanf("%d", &n) != EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(x[j]>x[j+1])
				{
					temp=x[j];
					x[j]=x[j+1];
					x[j+1]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",x[i]);
		}
		printf("\n");
	}
	
	return 0;
}
