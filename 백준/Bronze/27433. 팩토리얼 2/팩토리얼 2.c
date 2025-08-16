#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long factorial = 1; // 결과를 저장할 변수 (큰 수를 위해 long long 사용)

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    printf("%lld\n", factorial);

    return 0;
}
