import math
t = int(input())

a = [1] * 1000003
b = [0] * 1000003
a[0] = a[1] = 0
for i in range(2, 10001):
    if a[i] == 1:
        for j in range(i*i,1000003,i):
            a[j] = 0
for i in range(7,1000003):
    if a[i-6] == 1 and (a[i-2] == 1 or a[i-4] == 1) and a[i] == 1:
        b[i] = b[i-1] + 1
    else: b[i] = b[i-1]
    # print(i, a[i], sep=" ")

while t > 0:
    t -= 1
    n = int(input())
    print(b[n])
