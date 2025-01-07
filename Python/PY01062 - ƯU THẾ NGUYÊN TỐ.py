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
    cnt = 0
    n = len(s)
    for i in range(n):
        if s[i] == '2' or s[i] == '3' or s[i] == '5' or s[i] == '7':
            cnt+=1
    if check(len(s)) and cnt > int(len(s)/2): print("YES")
    else: print("NO")
    