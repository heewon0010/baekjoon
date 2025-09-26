from collections import Counter

N = int(input())
first_letters = []

for _ in range(N):
    name = input().strip()
    first_letters.append(name[0])  # 첫 글자만 저장

cnt = Counter(first_letters)

# 조건 만족하는 글자만 뽑아서 정렬
result = sorted([ch for ch, num in cnt.items() if num >= 5])

if result:
    print("".join(result))
else:
    print("PREDAJA")
