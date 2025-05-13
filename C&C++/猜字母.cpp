#include <stdio.h>
#include <ctype.h>
char a[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main() 
{
    int b;
    scanf("%d", &b);
    char c= a[b-1]; // 减一是因为数组索引从0开始计数
    printf("%c%c\n",toupper(c),tolower(c));
    return 0;
}


    //检查输入是否有效 
	//if (input < 1 || input > 26) {
	//printf("无效的序号，请输入1到26之间的数字。\n");
      //  return 0;
   // }
