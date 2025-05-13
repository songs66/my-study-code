#include<stdio.h>
int gcd(int x,int y)
{
	if(y<=x&&x%y==0)
		return y;
	else
	if(y>x&&y%x==0)
		return x;
	else
		return gcd(y,x%y);
}
int main() 
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",gcd(x,y));
	return 0;
 }
