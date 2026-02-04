a, b = map(int, input().split())

r1, c1 = (a - 1) % 4, (a - 1) // 4
r2, c2 = (b - 1) % 4, (b - 1) // 4

print(abs(r1 - r2) + abs(c1 - c2))
