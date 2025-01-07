import math

l = input().split()
a = int(l[0])
k = int(l[1])
n = int(l[2])
ok = 0
for i in range (k, n+1, k):
    if i - a > 0:
        ok = 1
        print(i - a, end = " ")
if ok == 0: print(-1)
