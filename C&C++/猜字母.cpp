#include <stdio.h>
#include <ctype.h>
char a[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main() 
{
    int b;
    scanf("%d", &b);
    char c= a[b-1]; // ��һ����Ϊ����������0��ʼ����
    printf("%c%c\n",toupper(c),tolower(c));
    return 0;
}


    //��������Ƿ���Ч 
	//if (input < 1 || input > 26) {
	//printf("��Ч����ţ�������1��26֮������֡�\n");
      //  return 0;
   // }
