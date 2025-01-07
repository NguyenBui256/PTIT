import math

t = 1
# t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = [int(x) for x in input().split()]
    a.sort()
    x = 1
    for i in a:
        if i + 1 not in a:
            print(i+1)
            break