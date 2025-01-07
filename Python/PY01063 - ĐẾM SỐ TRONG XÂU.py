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
    x = input()
    n = len(s)
    cnt = 0
    i = 0
    while i < n:
        if s[i] == x[0]:
            tmp = s[i:i+len(x)]
            if tmp == x:
                cnt += 1
                i += len(x)
            else: i += 1
        else: i += 1
    print(cnt)
    