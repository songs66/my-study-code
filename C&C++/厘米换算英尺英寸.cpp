#include<stdio.h>
int main()
{
	float cm,cun,chi;
	scanf("%f",&cm);
	float m=cm/100;
	cun=m/0.3084;
	float cunz=(int)cun;
	chi=(cun-cunz)*12;
	float chiz=(int)chi;
	printf("%.0f %.0f",chi,cun);
	return 0;
 } 
