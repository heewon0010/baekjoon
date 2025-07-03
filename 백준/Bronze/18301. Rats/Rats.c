#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, n12;
    scanf("%d %d %d", &n1, &n2, &n12);

    double N = ((double)(n1 + 1) * (n2 + 1)) / (n12 + 1) - 1;
    printf("%d\n", (int)floor(N));

    return 0;
}
