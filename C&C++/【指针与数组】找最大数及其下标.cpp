#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			return 1;
		int i,x[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}	
		int *p,max=x[0],xiabiao;
		p=x;
		for(i=0;i<n;i++)
		{
			if(*p>max)
			{
				max=*p;
				xiabiao=i;
			}
			p++;
		}
		printf("%d %d\n",max,xiabiao);
	}
	
	return 0;
}
