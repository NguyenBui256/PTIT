import math

while True:
    a,b,c,d = map(int,input().split())
    if not a and not b and not c and not d: break
    cnt = 0
    while not(a == b and b == c and c == d):
        tmp = a
        a = abs(a-b)
        b = abs(b-c)
        c = abs(c-d)
        d = abs(d-tmp)
        cnt += 1
    print(cnt)
    