#include <stdio.h>
#include <ctype.h>
int main()
{
    int ascii_code;
    
    // ��ȡ�û������Сд��ĸ
    char lower_case_char = getchar();
    
    // ���������ǲ���Сд��ĸ
//    if (!islower(lower_case_char)) {
//        printf("������һ��Сд��ĸ��\n");
//        return 0;
//    }
    
    // ת��Ϊ��д��ĸ
    char upper_case_char = toupper(lower_case_char);
    
    // ��ȡ��д��ĸ��ASCII��
    ascii_code = (int)upper_case_char;

    // �����д��ĸ����ASCII��
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
