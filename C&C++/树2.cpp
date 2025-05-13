#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

// ���ÿ���̨�ı���ɫ
void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// �������̨��Ļ
void clearScreen() {
    system("cls");
}

// ��ӡ���ĵ�ǰ״̬
void printTree(int height, int offset, int colorIndex) {
    clearScreen();
    
    // ��ӡ����
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1 + offset; j++) {
            printf(" ");
        }
        // ����colorIndex���ò�ͬ����ɫ
        setColor(((colorIndex + i) % 6) + 10); // ʹ�ò�ͬ����ɫ��
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        setColor(7); // �ָ�Ĭ����ɫ
        printf("\n");
    }
    
    // ��ӡ����
    for (int i = 0; i < height / 2; i++) {
        for (int j = 0; j < height - 1 + offset; j++) {
            printf(" ");
        }
        setColor(6); // ������ɫ
        printf("||\n");
        setColor(7); // �ָ�Ĭ����ɫ
    }
}

int main() {
    int height = 1; // ���ĳ�ʼ�߶�
    int maxHeight = 10; // �������߶�
    int offset = 0; // ���ɵ�ƫ����������ģ��ҡ��
    int colorIndex = 0; // ��ɫ����������ģ����ɫ�仯
    int direction = 1; // ҡ�ڷ���

    // ������������
    while (height <= maxHeight) {
        printTree(height, 0, colorIndex);
        Sleep(500); // ��ͣһ��ʱ�䣬�Ա�۲춯��Ч��
        height++;
        colorIndex = (colorIndex + 1) % 6; // ������ɫ����
    }

    // ����ҡ�ں���ɫ�仯����
    while (1) { // ����ѭ����ģ�������ҡ�ں���ɫ�仯
        printTree(maxHeight, offset, colorIndex);
        Sleep(500); // ��ͣһ��ʱ��
        offset += direction;
        if (offset > 2 || offset < -2) {
            direction = -direction; // �ı�ҡ�ڷ���
        }
        colorIndex = (colorIndex + 1) % 6; // ������ɫ����
    }

    return 0;
}
