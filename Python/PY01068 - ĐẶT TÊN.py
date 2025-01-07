from decimal import Decimal
import queue

a = []
b = [0] * 35
n = 0
k = 0    

def ql(i):
    if i == k:
        for j in range(1,k+1):
            print(a[b[j]-1], end=" ")
        print()
        return
    for j in range(b[i] + 1, n + 1):
        b[i+1] = j
        ql(i+1)
        



def solve():
    global n, k, a
    n, k = map(int,input().split())
    m = {}
    s = input().split()
    for i in s:
        m[i] = 1
    a = list(m)
    a.sort()
    n = len(a)
    ql(0)

t = 1
# t = int(input())
while t > 0:
    t -= 1
    solve()