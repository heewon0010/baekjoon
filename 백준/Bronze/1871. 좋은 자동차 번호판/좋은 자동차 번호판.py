n = int(input())

for _ in range(n):
    s = input()
    left, right = s.split('-')

    value = 0
    for i in range(3):
        value = value * 26 + (ord(left[i]) - ord('A'))

    num = int(right)

    if abs(value - num) <= 100:
        print("nice")
    else:
        print("not nice")
