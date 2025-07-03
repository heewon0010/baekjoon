#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);

        // 10으로 나눈 나머지만 보면 됨 (컴퓨터는 1~10번이니까)
        a %= 10;

        // 0이면 10번 컴퓨터가 처리
        if (a == 0) {
            printf("10\n");
            continue;
        }

        int result = 1;
        for (int i = 0; i < b; i++) {
            result = (result * a) % 10;
        }

        printf("%d\n", result);
    }

    return 0;
}
