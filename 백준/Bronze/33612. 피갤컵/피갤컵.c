#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int year = 2024;
    int month = 8;

    int add = (N - 1) * 7;
    year += (month + add - 1) / 12; // 몇 년이 지나는지 계산
    month = (month + add - 1) % 12 + 1; // 달 보정

    printf("%d %d\n", year, month);
    return 0;
}
