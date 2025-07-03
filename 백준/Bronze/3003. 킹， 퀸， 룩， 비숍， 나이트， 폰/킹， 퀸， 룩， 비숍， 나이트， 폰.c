#include <stdio.h>

int main() {
    int input[6];
    int correct[6] = {1, 1, 2, 2, 2, 8}; // 킹, 퀸, 룩, 비숍, 나이트, 폰 정답 개수

    for (int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", correct[i] - input[i]);
    }
    printf("\n");

    return 0;
}
