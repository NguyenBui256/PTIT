import math

t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    b = [0] * 1005
    a = []
    while n > 0:
        n -= 1
        x = int(input())
        b[x] += 1
        a.append(x)
    cnt = 0
    ans = 0
    a.sort()
    for i in a:
        if b[i] > cnt: 
            cnt = b[i]
            ans = i
    print(ans)