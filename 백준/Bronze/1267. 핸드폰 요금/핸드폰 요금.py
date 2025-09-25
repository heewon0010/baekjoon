# 입력
n = int(input())
calls = list(map(int, input().split()))

# 요금 계산
y = 0
m = 0

for call in calls:
    y += (call // 30 + 1) * 10
    m += (call // 60 + 1) * 15

# 결과 출력
if y < m:
    print("Y", y)
elif m < y:
    print("M", m)
else:  # 같을 때
    print("Y M", y)
