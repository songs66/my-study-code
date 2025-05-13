#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


// ���ÿ���̨�ı���ɫ
void yanse(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// �������̨��Ļ
void qingping() {
    system("cls");
}

// ��ӡ���ĵ�ǰ״̬
void huashu(int shugan, int shuguan, int colorIndex) {
    qingping();

    // ��ӡ����
    for (int i = 0; i < shugan; i++) {
        for (int j = 0; j < shugan - i - 1 + shuguan; j++) {
            printf(" ");
        }
        // ����colorIndex���ò�ͬ����ɫ
        yanse(((colorIndex + i) % 8) + 2); // ʹ�ò�ͬ����ɫ��
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        yanse(7); // �ָ�Ĭ����ɫ
        printf("\n");
    }

    // ��ӡ����
    for (int i = 0; i < shugan / 2; i++) {
        for (int j = 0; j < shugan - 1 + shuguan; j++) {
            printf(" ");
        }
        yanse(6); // ������ɫ
        printf("||\n");
        yanse(7); // �ָ�Ĭ����ɫ
    }
}

int main() {
    int height = 1; // ���ĳ�ʼ�߶�
    int maxHeight = 10; // �������߶�
    int offset = 0; // ���ɵ�ƫ����������ģ��ҡ��
    int colorIndex = 0; // ��ɫ����������ģ����ɫ�仯

    // ������������
    while (height <= maxHeight) {
        huashu(height, 0, colorIndex);
        Sleep(500); // ��ͣһ��ʱ�䣬�Ա�۲춯��Ч��
        height++;
        colorIndex = (colorIndex + 1) % 8; // ������ɫ����
    }

    // ����ҡ�ں���ɫ�仯����
    while (1) { // ����ѭ����ģ�������ҡ�ں���ɫ�仯
        huashu(maxHeight, offset, colorIndex);
        Sleep(500); // ��ͣһ��ʱ��
        offset += (offset == 2 || offset == -2) ? -2 : 1; // �ı�ҡ�ڷ���
        colorIndex = (colorIndex + 1) % 8; // ������ɫ����
    }

    return 0;
}
