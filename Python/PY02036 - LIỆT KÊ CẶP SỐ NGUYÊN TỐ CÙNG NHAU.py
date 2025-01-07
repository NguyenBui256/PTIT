import math

t = 1
# t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = [int(x) for x in input().split()]
    a.sort()
    for i in range(n-1):
        for j in range(i+1,n):
            if math.gcd(a[i],a[j]) == 1:
                print(a[i],a[j])
