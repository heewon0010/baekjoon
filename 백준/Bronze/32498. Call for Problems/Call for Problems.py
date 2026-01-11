num = int(input())
cnt = 0

for i in range(num):
    a = int(input())
    if a % 2 == 1:
        cnt += 1

print(cnt)
