#include <stdio.h>
int main()
{
	int m,i=1;
	scanf("%d",&m);
	printf("1 ");
	while(i<=m)
	{
		int num=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0) num+=j;
		}
		if(i==num) printf("%d ",i);
		i++;
	}
    return 0;
}
