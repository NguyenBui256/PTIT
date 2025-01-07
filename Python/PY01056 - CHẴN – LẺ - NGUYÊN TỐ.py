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
        if i % 2 == 0 and ord(s[i]) % 2 != 0: 
            ok = 0
            break
        if i % 2 == 1 and ord(s[i]) % 2 == 0:
            ok = 0
            break
        sum += ord(s[i]) - ord('0')
    if ok and check(sum): print("YES")
    else: print("NO")

    