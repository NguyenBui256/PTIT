import math

def myFunc(e):
    return int(e)

t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = sorted([int(x) for x in input().split()])
    b = sorted([int(x) for x in input().split()])
    ok = 1
    for i in range (n):
        if a[i] > b[i]:
            ok = 0
            break
    if ok == 1: print("YES")
    else: print("NO")