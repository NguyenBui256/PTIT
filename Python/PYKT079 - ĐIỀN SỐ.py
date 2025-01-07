t = int(input())
for _ in range (t):
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [0] * 1003
    l = 10**9
    r = 0
    for i in a:
        b[i] = 1
        if i > r: r = i
        if i < l: l = i
    cnt = 0
    for i in range(l,r+1):
        if b[i] == 0:
            cnt += 1
    print(cnt)