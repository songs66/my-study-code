#include<stdio.h>
int main()
{
	float a,b,c,d;
	scanf("%f %f %f",&a,&b,&c);
	d=1/(1/a+1/b+1/c);
	printf("%.2f",d);
	return 0;
}
