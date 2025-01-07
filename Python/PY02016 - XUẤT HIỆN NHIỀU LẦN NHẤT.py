import math

t = 1
t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [0] * 1000001
    Max = 0
    for i in a:
        b[i] += 1
        if b[i] > Max: Max = b[i]
    if Max <= int(len(a) / 2):
        print("NO")
        continue
    cnt = 0
    for i in a:
        if b[i] == Max:
            print(i)
            break
    