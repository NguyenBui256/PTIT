import math
import queue

def nt(x):
    if x < 2:
        return False
    for i in range (2, int(math.sqrt(x)+1)):
        if x % i == 0: 
            return False
    return True

def check(x):
    sum = 0
    while x > 0:
        sum += int(x % 10)
        x /= 10
    if nt(sum): 
        return "YES"
    return "NO"

t = int(input())
while t > 0:
    t -= 1
    l = input().split()
    tmp = math.gcd(int(l[0]),int(l[1]))
    # print(tmp)
    print(check(tmp))