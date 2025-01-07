import math

def nt(n):
    if n < 2:
        return "NO"
    for i in range(2, int(math.sqrt(n) + 1)):
        if n % i == 0: 
            return "NO"
    return "YES"

def ucln(a,b):
    if b == 0: return a
    return ucln(b, a % b)
    

t = int(input())
while t > 0:
    n = int(input())
    cnt = 0
    for i in range(1,n):
        if ucln(i,n) == 1:
            # print(i)
            cnt += 1
    print(nt(cnt))
    t -= 1