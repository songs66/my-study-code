#include <stdio.h>
#include <string.h>

int jia(const char *x) {
    int m = strlen(x);
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (x[i] >= '0' && x[i] <= '9') { // ȷ���������ַ�
            sum += (x[i] - '0');
        }
    }
    return sum;
}

int main() {
    char x[100];
    fgets(x, sizeof(x), stdin); // ʹ��fgets����gets
    x[strcspn(x, "\n")] = 0; // ȥ��fgets����Ļ��з�
    printf("%d", jia(x));
    return 0;
}
