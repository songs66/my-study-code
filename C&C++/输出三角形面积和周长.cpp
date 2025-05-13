#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,s,area;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("These sides do not correspond to a valid triangle\n");
	}
	else{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area = %.2f; perimeter = %.2f",area,s*2);
	}
	return 0;
 } 
