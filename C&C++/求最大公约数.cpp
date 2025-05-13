#include<stdio.h>
int js(int a, int b)
 {
    int min = a < b ? a : b;
    for (int i = min; i > 0; i--)
	{
        if (a % i == 0 && b % i == 0) 
            return i; 
    }
}
int main()
{
	int  x,y;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
			printf("%d 0x%x 0%o",js(x,y),js(x,y),js(x,y));
	}
	return 0;
}



