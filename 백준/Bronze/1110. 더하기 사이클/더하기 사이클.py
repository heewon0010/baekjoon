n = int(input())   # 입력값
original = n       # 원래 값 저장
count = 0          # 사이클 길이

while True:
    count += 1
    # 각 자리 더하기
    a = n // 10        # 십의 자리
    b = n % 10         # 일의 자리
    s = a + b          # 자리수 합
    
    # 새로운 수 만들기
    n = (b * 10) + (s % 10)
    
    if n == original:  # 원래 값으로 돌아오면
        break

print(count)
