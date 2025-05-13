#include<stdio.h>
int main()
{
	int n,a[100],min,mins;
	while(scanf("%d", &n) != EOF)
	{
		min=1000000;
		mins=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<min) 
			{
				min=a[i];
				mins=i;
			}
			
		}
	printf("%d\n",mins);
	}	
	return 0;
}
