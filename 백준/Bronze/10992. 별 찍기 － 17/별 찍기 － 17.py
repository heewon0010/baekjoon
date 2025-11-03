N = int(input())

for i in range(1, N+1):
    if i == 1:  # 첫 줄
        print(' ' * (N-1) + '*')
    elif i == N:  # 마지막 줄
        print('*' * (2*N - 1))
    else:  # 중간 줄
        print(' ' * (N-i) + '*' + ' ' * (2*i - 3) + '*')
