import math

def check(n):
    if n < 2: return False
    for i in range(2,int(math.sqrt(n)+1)):
        if n % i == 0:
            return False
    return True

t = int(input())
while t > 0:
    t -= 1
    s = input()
    x = s[::-1]
    n = len(s)
    ok = 1
    for i in range(1,n):
        if abs(ord(s[i]) - ord(s[i-1])) != abs(ord(x[i]) - ord(x[i-1])):
            ok = 0
            break
    if ok: print("YES")
    else: print("NO")

    