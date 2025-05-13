#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


// 设置控制台文本颜色
void yanse(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// 清除控制台屏幕
void qingping() {
    system("cls");
}

// 打印树的当前状态
void huashu(int shugan, int shuguan, int colorIndex) {
    qingping();

    // 打印树冠
    for (int i = 0; i < shugan; i++) {
        for (int j = 0; j < shugan - i - 1 + shuguan; j++) {
            printf(" ");
        }
        // 根据colorIndex设置不同的绿色
        yanse(((colorIndex + i) % 8) + 2); // 使用不同的绿色调
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        yanse(7); // 恢复默认颜色
        printf("\n");
    }

    // 打印树干
    for (int i = 0; i < shugan / 2; i++) {
        for (int j = 0; j < shugan - 1 + shuguan; j++) {
            printf(" ");
        }
        yanse(6); // 设置棕色
        printf("||\n");
        yanse(7); // 恢复默认颜色
    }
}

int main() {
    int height = 1; // 树的初始高度
    int maxHeight = 10; // 树的最大高度
    int offset = 0; // 树干的偏移量，用于模拟摇摆
    int colorIndex = 0; // 颜色索引，用于模拟颜色变化

    // 树的生长过程
    while (height <= maxHeight) {
        huashu(height, 0, colorIndex);
        Sleep(500); // 暂停一段时间，以便观察动画效果
        height++;
        colorIndex = (colorIndex + 1) % 8; // 更新颜色索引
    }

    // 树的摇摆和颜色变化过程
    while (1) { // 无限循环以模拟持续的摇摆和颜色变化
        huashu(maxHeight, offset, colorIndex);
        Sleep(500); // 暂停一段时间
        offset += (offset == 2 || offset == -2) ? -2 : 1; // 改变摇摆方向
        colorIndex = (colorIndex + 1) % 8; // 更新颜色索引
    }

    return 0;
}
