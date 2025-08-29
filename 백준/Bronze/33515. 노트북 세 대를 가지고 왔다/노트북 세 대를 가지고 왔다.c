#include <stdio.h>

int main() {
    int T1, T2;
    scanf("%d %d", &T1, &T2);

    int maxTime = (T1 < T2) ? T1 : T2; 
    printf("%d\n", maxTime);

    return 0;
}
