import math

def check(n):
    if n < 2: return False
    for i in range(2,int(math.sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True

b = [0] * 1000003
t = 1
# t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = [int(x) for x in input().split()]
    for i in a:
        if b[i] > 0 or check(i):
            b[i] += 1
    for i in a:
        if b[i] > 0:
            print(i, b[i])
            b[i] = 0
    
