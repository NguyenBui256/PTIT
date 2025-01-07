import math

t = int(input())
while t > 0:
    t -= 1
    s = input()
    ok = 1
    for i in range(len(s)-1):
        if s[i] > s[i+1]:
            ok = 0
            break
    if ok == 1: print("YES")
    else: print("NO")
