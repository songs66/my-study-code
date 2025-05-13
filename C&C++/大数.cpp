#include<stdio.h>
#include<math.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	double m;
	while(n--)
	{		
		m=1;
		scanf("%d",&x);
		for(int j=1;j<=x;j++)
		m+=log10(j);
		printf("%d\n",(int)m);					
	}
	
	return 0;
}
