#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int K;
    scanf("%d %d", &N, &K);

    int coins[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &coins[i]);
    }

    int count = 0;

    for (int i = N - 1; i >= 0; i--) {
        if (K >= coins[i]) {
            count += K / coins[i];
            K = K % coins[i];
        }
    }

    printf("%d", count);

    return 0;
}
