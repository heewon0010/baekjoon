#include <stdio.h>

int main(void) {
    int Q;
    scanf("%d", &Q); 

    for (int i = 0; i < Q; i++) {
        int a; 
        scanf("%u", &a);

        if (a != 0 && (a & (a - 1)) == 0)
            printf("1\n"); 
        else
            printf("0\n");  
    }

    return 0;
}
