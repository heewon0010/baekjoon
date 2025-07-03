#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = 0;
    int num = 1, count = 0;

    for (int i = 1; i <= B; i++) {
        if (i >= A) sum += num;
        count++;
        if (count == num) {
            num++;
            count = 0;
        }
    }

    printf("%d\n", sum);
    return 0;
}
