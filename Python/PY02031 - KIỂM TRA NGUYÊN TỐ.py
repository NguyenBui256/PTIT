from functools import cmp_to_key
import math

def check(n):
    if n < 2:
        return False
    for i in range(2,int(math.sqrt(n) + 1)):
        if n % i == 0: return False
    return True

t = 1
# t = int(input())
while t > 0:
    t -= 1
    n, m = map(int, input().split())
    b = [0] * (m+1)
    a = b * (n + 1)

    for i in range(n):
        a[i] = [int(x) for x in input().split()]
        for j in a[i]:
            if check(j): j = 1
            else: j = 0
            print(j, end=" ")
        print()
    
