#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 세 수 중 중앙값 구하기
    if ((b <= a && a <= c) || (c <= a && a <= b)) {
        printf("%d\n", a);
    } else if ((a <= b && b <= c) || (c <= b && b <= a)) {
        printf("%d\n", b);
    } else {
        printf("%d\n", c);
    }

    return 0;
}
