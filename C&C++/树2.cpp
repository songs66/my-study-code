#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

// 设置控制台文本颜色
void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

// 清除控制台屏幕
void clearScreen() {
    system("cls");
}

// 打印树的当前状态
void printTree(int height, int offset, int colorIndex) {
    clearScreen();
    
    // 打印树冠
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1 + offset; j++) {
            printf(" ");
        }
        // 根据colorIndex设置不同的绿色
        setColor(((colorIndex + i) % 6) + 10); // 使用不同的绿色调
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        setColor(7); // 恢复默认颜色
        printf("\n");
    }
    
    // 打印树干
    for (int i = 0; i < height / 2; i++) {
        for (int j = 0; j < height - 1 + offset; j++) {
            printf(" ");
        }
        setColor(6); // 设置棕色
        printf("||\n");
        setColor(7); // 恢复默认颜色
    }
}

int main() {
    int height = 1; // 树的初始高度
    int maxHeight = 10; // 树的最大高度
    int offset = 0; // 树干的偏移量，用于模拟摇摆
    int colorIndex = 0; // 颜色索引，用于模拟颜色变化
    int direction = 1; // 摇摆方向

    // 树的生长过程
    while (height <= maxHeight) {
        printTree(height, 0, colorIndex);
        Sleep(500); // 暂停一段时间，以便观察动画效果
        height++;
        colorIndex = (colorIndex + 1) % 6; // 更新颜色索引
    }

    // 树的摇摆和颜色变化过程
    while (1) { // 无限循环以模拟持续的摇摆和颜色变化
        printTree(maxHeight, offset, colorIndex);
        Sleep(500); // 暂停一段时间
        offset += direction;
        if (offset > 2 || offset < -2) {
            direction = -direction; // 改变摇摆方向
        }
        colorIndex = (colorIndex + 1) % 6; // 更新颜色索引
    }

    return 0;
}
