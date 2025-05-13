#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int *student,i,sum=0;
		student=(int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d",student);
			sum+=*student;
			student++; 
		}
		printf("%.4f",sum*1.0/n);
	}
	return 0;
}

