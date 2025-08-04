#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int case1 = N * 78 / 100; 
    int case2 = N - (N * 20 / 100 * 22 / 100); 

    printf("%d %d\n", case1, case2);
    return 0;
}
