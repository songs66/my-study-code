#include <stdio.h>
#include<string.h>
 int main()
{
    int m, n;
    char str[2000];
    while(scanf("%s", str) && str[0]!='0')
    {
        m = 0;
        for(int i=0; str[i]!='\0'; i++)
            m += (str[i] - '0');
        while(m>9)
        {
            n = 0;
            while(m)
            {
                n += m%10;
                m /= 10;
            }
            m = n;
        }
        printf("%d\n", m);
    }
    return 0;
}
