#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long ans = 0;

    int c_start = (N + 2) / 3;     // ceil(N/3)
    int c_end   = (N - 1) / 2;     // floor((N - 1)/2)

    if (c_start <= c_end) {
        for (int c = c_start; c <= c_end; c++) {
            int S = N - c;         // a + b

            int a_min = S - c;
            if (a_min < 1) a_min = 1;

            int a_max = S / 2;     // a <= b

            if (a_max >= a_min) {
                ans += (a_max - a_min + 1);
            }
        }
    }

    printf("%lld\n", ans);
    return 0;
}
