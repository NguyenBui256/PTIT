import math

while True:
    n = int(input())
    if n == 0: break
    b = [0] * 10005
    b[n] += 1
    while n != 1:
        if n % 2 == 0: 
            n = int(n/2)
        else:
            n = n * 3 + 1
        b[n] += 1
    cnt = 0
    for i in b: 
        if i > 0: 
            cnt += 1
    print(cnt)
    