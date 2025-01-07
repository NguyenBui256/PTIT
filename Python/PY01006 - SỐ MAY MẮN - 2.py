import math

t = int(input())
while t > 0:
    s = input()
    n = len(s)
    cnt = 0
    for i in range(n):
        if s[i] != "4" and s[i] != "7":
            cnt = 1
            break
    if cnt == 0:
        print("YES")
    else: 
        print("NO")
    t -= 1
