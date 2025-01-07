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
    cnt2 = 0
    for i in s:
        if i == '2' or i == '3' or i == '5' or i == '7':
            cnt += 1
        else: cnt2 +=1
    if check(len(s)) and cnt > cnt2: print("YES")
    else: print("NO")

    