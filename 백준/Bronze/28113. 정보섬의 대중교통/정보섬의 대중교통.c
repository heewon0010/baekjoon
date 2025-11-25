#include <stdio.h>

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    int bus = A;
    int subway = (N > B) ? N : B;

    if (bus < subway)
        printf("Bus");
    else if (bus > subway)
        printf("Subway");
    else
        printf("Anything");

    return 0;
}
