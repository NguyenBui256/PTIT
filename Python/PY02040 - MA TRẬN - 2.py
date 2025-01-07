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
    n = int(input())
    b = [0] * n
    a = b * n
    sum1 = 0
    sum2 = 0
    for i in range(n):
        a[i] = [int(x) for x in input().split()]
        for j in range(0,n-i-1):
            sum1 += a[i][j]
        for j in range(n-i,n):
            sum2 += a[i][j]
        # print(sum1,sum2)
    k = int(input())
    if abs(sum1-sum2) <= k:
        print("YES")
    else: 
        print("NO")
    print(abs(sum1-sum2))


    
