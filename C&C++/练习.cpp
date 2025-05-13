#include <stdio.h>
#include <string.h>

int jia(const char *x) {
    int m = strlen(x);
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (x[i] >= '0' && x[i] <= '9') { // 确保是数字字符
            sum += (x[i] - '0');
        }
    }
    return sum;
}

int main() {
    char x[100];
    fgets(x, sizeof(x), stdin); // 使用fgets代替gets
    x[strcspn(x, "\n")] = 0; // 去除fgets读入的换行符
    printf("%d", jia(x));
    return 0;
}
