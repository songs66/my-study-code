#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,num=0;
	while(scanf("%d",&n)!=EOF)
	{
		int *p=(int*)malloc(n*sizeof(int));
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
			if(*p<60)
			num++;
		}
		printf("%d\n",num);
		free(p);
	}
	return 0;
}

