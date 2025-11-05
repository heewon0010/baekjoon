M = int(input())
coins = list(map(int, input().split()))

xor_sum = 0
for c in coins:
    xor_sum ^= c

if xor_sum == 0:
    print("cubelover")
else:
    print("koosaga")
