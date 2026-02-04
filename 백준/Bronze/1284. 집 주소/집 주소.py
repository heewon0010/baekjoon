while True:
    s = input().strip()
    if s == "0":
        break

    width = 2  # 양쪽 경계 여백 1cm씩

    for i, ch in enumerate(s):
        if ch == '1':
            width += 2
        elif ch == '0':
            width += 4
        else:
            width += 3

        if i != len(s) - 1:
            width += 1  # 숫자 사이 여백

    print(width)
