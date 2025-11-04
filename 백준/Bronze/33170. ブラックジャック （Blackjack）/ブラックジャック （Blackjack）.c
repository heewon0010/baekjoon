#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A + B + C <= 21) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
