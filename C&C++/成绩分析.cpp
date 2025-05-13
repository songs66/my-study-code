#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n,i,sum=0,max=0,min=100;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		sum+=x[i];
		if(x[i]>max)
		max=x[i];
		if(x[i]<min)
		min=x[i];
	}
	printf("%d\n%d\n%.2f",max,min,(double)sum/n);
	return 0;
}
