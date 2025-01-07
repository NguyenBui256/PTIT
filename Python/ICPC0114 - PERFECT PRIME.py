import math

def nt(n):
    if n < 2: return False
    for i in range(2,int(math.sqrt(n)+1)):
        if n % i == 0:
            return False
    return True

t = int(input())
while t > 0:
    t -= 1
    ok = 1
    n = input()
    lenn = len(n)
    sum = 0
    for i in range(lenn):
        sum += ord(n[i]) - ord('0')
        if not nt(ord(n[i]) - ord('0')):
            ok = 0
            break
    if ok and nt(int(n)) and nt(int(n[::-1])) and nt(sum):
        print("Yes")
    else: print("No")
    
            