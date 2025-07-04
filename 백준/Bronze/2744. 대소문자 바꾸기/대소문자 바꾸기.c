#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            // 소문자면 대문자로
            str[i] = str[i] - 'a' + 'A';
        } else if ('A' <= str[i] && str[i] <= 'Z') {
            // 대문자면 소문자로
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("%s\n", str);
    return 0;
}
