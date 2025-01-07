import math
import bisect
a = [0]*10002
nt = []

def sang():
    a[0] = 1
    a[1] = 1
    for i in range (2,10001):
        if a[i] == 0:
            for j in range(i*i,10001,i):
                a[j] = 1
            nt.append(i)

sang()
n = int(input())
ls = [int(x) for x in input().split()]
ans = 0
for i in ls:
    s = 10**9
    for j in nt:
        s = min(s,abs(j-i))
    ans = max(ans,s)
print(ans)