#include <stdio.h>
#define LEN_INPUT 1000001

int main() {
    char str[1000001];  // 100만 글자 + '\0' 널문자까지 총 1000001칸 필요
    scanf("%s", str);   // 공백 없는 문자열이면 %s로 OK

    printf("%s", str);

    return 0;
}
