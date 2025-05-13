#include <stdio.h>
//#include <windows.h>
//作者：计科2403 宋子豪
void huashu(int gao, int shuguan) {
    system("cls");
    for (int i = 0; i < gao; i++) {
        for (int j = 0; j < gao - i - 1 + shuguan; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < gao / 2; i++) {
        for (int j = 0; j < gao - 1 + shuguan; j++) {
            printf(" ");
        }
        printf("||\n");
    }
}

int main() {
    int height = 1;
    int maxHeight = 10;
    int pianyi = 0;
    while (height <= maxHeight) {
        huashu(height, 0);
        Sleep(500);
        height++;
    }
    while (1) {
        huashu(maxHeight, pianyi);
        Sleep(500);
        pianyi += (pianyi == 2 || pianyi == -2) ? -2 : 1;
    }

    return 0;
}
