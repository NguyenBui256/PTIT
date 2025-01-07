import math

t = int(input())
while t > 0:
    t -= 1
    s = input()
    if s[0] == s[1] or len(s) % 2 == 0:
        print("NO")
        continue
    n = len(s)
    ok = 1
    for i in range(0,n-2,2):
        if s[i] != s[i+2]:
            ok = 0
            break
    if ok : print("YES")
    else: print("NO")

    