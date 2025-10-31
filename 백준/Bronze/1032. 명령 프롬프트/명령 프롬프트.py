import sys
input = sys.stdin.readline

N = int(input().strip())
names = [input().strip() for _ in range(N)]
L = len(names[0])

pattern = list(names[0])

for i in range(L):
    ch = names[0][i]
    for j in range(1, N):
        if names[j][i] != ch:
            pattern[i] = '?'
            break

print(''.join(pattern))
