nums = list(map(int, input().split()))  # 5개 정수 입력

total = 0
for x in nums:
    total += x * x      # 또는 x ** 2

print(total % 10)
