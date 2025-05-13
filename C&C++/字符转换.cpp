#include <stdio.h>
#include <ctype.h>
int main()
{
    int ascii_code;
    
    // 获取用户输入的小写字母
    char lower_case_char = getchar();
    
    // 检查输入的是不是小写字母
//    if (!islower(lower_case_char)) {
//        printf("请输入一个小写字母。\n");
//        return 0;
//    }
    
    // 转换为大写字母
    char upper_case_char = toupper(lower_case_char);
    
    // 获取大写字母的ASCII码
    ascii_code = (int)upper_case_char;

    // 输出大写字母和其ASCII码
    printf("%c %d\n", upper_case_char, ascii_code);

    return 0;
}

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    int ma;
//    char xiaoxie= getchar();
//    char daxie= toupper(xiaoxie);
//    ma= (int)daxie;
//    printf("%c %d\n",daxie,ma);
//    return 0;
//}
