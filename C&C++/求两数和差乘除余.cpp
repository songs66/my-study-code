#include<stdio.h>
int main(void)
{
    float a,b;
    printf("Enter num1:");
	scanf("%f",&a);
	printf("Enter num2:");
	scanf("%f",&b);
    printf("%.0f+%.0f=%.0f\n",a,b,a+b);
    printf("%.0f-%.0f=%.0f\n",a,b,a-b);
    printf("%.0f*%.0f=%.0f\n",a,b,a*b);
    printf("%.0f/%.0f=%.2f\n",a,b,a/b);
    int c=a,d=b;
	printf("%d%s%d=%d",c,"%",d,c%d);
    return 0;
}
