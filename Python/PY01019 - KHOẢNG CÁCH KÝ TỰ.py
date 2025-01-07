import math

t = int(input())
while t > 0:
    t -= 1
    s = input()
    r = s[::-1]
    n = len(s)
    ok = 1
    for i in range(1,n):
        if abs(ord(s[i]) - ord(s[i-1])) != abs(ord(r[i]) - ord(r[i-1])):
            ok = 0
            break
    if ok == 1: print("YES")
    else: print("NO")
