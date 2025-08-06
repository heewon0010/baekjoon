#include <stdio.h>

int main() {
    int R, S;
    scanf("%d", &R); // 일반 박스 개수
    scanf("%d", &S); // 작은 박스 개수

    int total = R * 8 + S * 3;
    int leftover = total - 28;

    printf("%d\n", leftover);

    return 0;
}
