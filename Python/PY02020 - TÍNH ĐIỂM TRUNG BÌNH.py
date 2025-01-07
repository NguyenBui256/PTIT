import math

t = 1
# t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = [float(x) for x in input().split()]
    a.sort()
    i = 0
    j = n -1
    while a[i] == a[0]:
        i += 1
    while a[j] == a[n-1]:
        j -= 1
    sum = 0
    for k in range(i,j+1):
        sum += a[k]
    print("%.2f" % (sum / (j - i + 1)))
