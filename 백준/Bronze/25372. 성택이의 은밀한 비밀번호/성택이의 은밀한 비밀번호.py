n = int(input())  # 문자열 개수 입력

for _ in range(n):
    s = input().strip()  # 문자열 입력
    if 6 <= len(s) <= 9:
        print("yes")
    else:
        print("no")
