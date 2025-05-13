#include<stdio.h>
int main()
{
	int n,a[100],max;
	while(scanf("%d", &n) != EOF)
	{
		max=-10000;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max) max=a[i];
		}
	printf("%d\n",max);
	}	
	return 0;
}
