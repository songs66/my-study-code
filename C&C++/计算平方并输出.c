#include<stdio.h>
int main(void)
{
    int x,y;
    scanf("%d",&x);
	y=x*x;
	printf("%d = %d*%d\n",y,x,x);   //���
    printf("%d*%d = %d",x,x,y);
    return 0;
}
