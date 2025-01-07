import math

def gt(n):
    sum = 1
    for i in range (1,n+1):
        sum *= i
    return sum

t = int(input())
while t > 0:
    t -= 1
    n = input()
    lenn = len(n)
    sum = 0
    for i in range(lenn):
        sum += gt(ord(n[i]) - ord('0'))
    if sum == int(n):
        print("Yes")
    else:
        print("No")
    
            