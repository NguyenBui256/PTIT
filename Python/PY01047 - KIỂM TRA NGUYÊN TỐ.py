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
    n = s[len(s) - 4: len(s)]
    if check(int(n)): print("YES")
    else: print("NO")

    