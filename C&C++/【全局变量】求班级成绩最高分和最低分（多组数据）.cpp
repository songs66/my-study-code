#include<stdio.h>
#include <float.h>
double max,min;
void maxmin(double score[],int n)
{
	int i;
	max=min=score[0];
	for(i=0;i<n;i++)
	{
		if(score[i]>max)
			max=score[i];
		if(score[i]<min)
			min=score[i];
	}
}
int main() 
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		double score[n];
		for(i=0;i<n;i++)
		{
			scanf("%lf",&score[i]);
		}
		maxmin(score,n);
		printf("%.2f %.2f\n",max,min);
	}
	return 0;
 }
