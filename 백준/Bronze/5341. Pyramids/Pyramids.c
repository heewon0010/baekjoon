#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        int total = n * (n + 1) / 2;
        printf("%d\n", total);
    }

    return 0;
}
