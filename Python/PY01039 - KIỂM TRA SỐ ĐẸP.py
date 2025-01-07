import math

def gt(n):
    sum = 1
    for i in range (1,n+1):
        sum *= i
    return sum

t = int(input())
while t > 0:
    t -= 1
    s = input()
    n = len(s)
    ok = 1
    for i in range(0,n-2):
        if s[i] != s[i+2]:
            ok = 0
            break
    if ok == 1: print("YES")
    else: print("NO")

    
    
            