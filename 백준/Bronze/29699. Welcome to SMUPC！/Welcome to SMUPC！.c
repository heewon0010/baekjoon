#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    char c[] = "WelcomeToSMUPC";

    printf("%c\n", c[(a - 1) % 14]);

    return 0;
}
