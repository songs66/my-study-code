#include <stdio.h>
#include <math.h>
int main() 
{
    double r,h,l,s;
    scanf("%lf%lf",&r,&h);
    l= sqrt(r*r+h*h);
    s=3.14159*r*l;
	printf("%.2f\n",s);
    return 0;
}

 
    // ������������λС�� s= round(s* 100)/100.0;
