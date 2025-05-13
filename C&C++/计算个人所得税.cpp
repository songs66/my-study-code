#include<stdio.h>
int main()
{
	float a;
	scanf("%f",&a);
	if(a<=1600){
		printf("0.00");
	}
	else if(a<=2500){
		printf("%.2f",(a-1600)*0.05);
	}
	else if(a<=3500){
		printf("%.2f",(a-1600)*0.1);
	}
	else if(a<=4500){
		printf("%.2f",(a-1600)*0.15);
	}
	else
	printf("%.2f",(a-1600)*0.2);
	return 0;
}
