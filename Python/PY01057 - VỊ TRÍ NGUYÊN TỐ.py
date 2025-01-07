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
    ok = 1
    sum = 0
    n = len(s)
    for i in range(n):
        if check(i) and s[i] != '2' and s[i] != '3' and s[i] != '5' and s[i] != '7': 
            ok = 0
            break
        if not check(i) and (s[i] == '2' or s[i] == '3' or s[i] == '5' or s[i] == '7'):
            ok = 0
            break
    if ok: print("YES")
    else: print("NO")

    