from decimal import Decimal
import queue

a = []
n = 0
k = 0    

def Find(n,k):
    if k == 2**n:
        print(chr(ord('A') + n))
    elif k < 2**n:
        Find(n-1,k)
    else: Find(n-1,k - 2**n)

def solve():
    global n, k
    n, k = map(int,input().split())
    Find(n,k)

t = int(input())
while t > 0:
    t -= 1
    solve()