#include<stdio.h>
int main()
{
	int m,n,x[20],x2[10],i,j,temp;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&x[i]);
	for(j=0;j<n;j++)
		scanf("%d",&x2[j]);
	for(i=0;i<n;i++)
		x[m+i]=x2[i];
	for(i=0;i<m+n-1;i++)
		{
			for(j=0;j<m+n-i-1;j++)
			{
				if(x[j]>x[j+1])
				{
					temp=x[j];
					x[j]=x[j+1];
					x[j+1]=temp;
				}
			}
		}
	for(i=0;i<m+n;i++)
		printf("%d ",x[i]);
	return 0;
}
