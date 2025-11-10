
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int winner = 0; 
    int max_result = -1;

    for (int i = 1; i <= N; i++) {
        int card[5];
        for (int j = 0; j < 5; j++) {
            scanf("%d", &card[j]);
        }

        int best = 0;
        //oh no 3중for문 :sob:
        for (int i = 0; i < 3; i++) { //1~3
            for (int j = i + 1; j < 4; j++) { // 2~4
                for (int k = j + 1; k < 5; k++) { // 3~5
                    int sum = (card[i] + card[j] + card[k]) % 10; // 일의자리수
                    if (sum > best) best = sum;
                    
                }
            }
        }

        if (best >= max_result) { 
            max_result = best;
            
            winner = i;
        }
    }

    printf("%d", winner);
    return 0;
    
}