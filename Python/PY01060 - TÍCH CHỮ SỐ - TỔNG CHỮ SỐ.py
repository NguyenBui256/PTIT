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
    zerocheck = 0
    sum = 0
    tich = 1
    n = len(s)
    for i in range(n):
        if i % 2 == 1:
            sum += int(s[i])
        else:
            if s[i] != '0': 
                zerocheck = 1
                tich *= int(s[i])
    if zerocheck: print(tich, end=" ")
    else: print(0, end=" ")
    print(sum)
    