#include<stdio.h>
int main()
{
	int n,tao=1,i=1;
	scanf("%d",&n);
	while(i<n)
	{
		tao=(tao+1)*2;
		i++;
	}
	printf("%d",tao);
	return 0;
}
