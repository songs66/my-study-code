#include<stdio.h>
#include<math.h>
int main()
{
	float money,rate,year,lixi;
	scanf("%f %f %f",&money,&year,&rate);
	lixi=money*pow(1+rate,year)-money;
	printf("interest = %.2f",lixi);
	return 0;
}
