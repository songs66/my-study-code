#include<stdio.h>
int main()
{
	int n,a[100];
	double sum;
	while(scanf("%d", &n) != EOF)
	{
		sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
	printf("%.4f\n",sum/n);
	}
	return 0;
}
