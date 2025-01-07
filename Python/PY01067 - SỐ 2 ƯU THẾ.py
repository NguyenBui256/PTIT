from decimal import Decimal
import queue

a = []

def check(n):
    s = str(n)
    cnt = 0
    for i in s:
        if i == '2':
            cnt += 1
    return cnt > len(s) / 2

def init():
    global a
    q = queue.Queue()
    q.put((1,0))
    q.put((2,1))
    while not q.empty() and len(a) < 1005:
        f = q.get()
        if check(f[0]): a.append(f[0])
        for j in range(0,3):
            if j == 2:
                q.put((f[0]*10+2,f[1]+1))
            else :
                q.put((f[0]*10+j,f[1]))
    a.sort()

    

def solve():
    n = int(input())
    for i in range(n): print(a[i],end=" ")
    print()


init()
t = int(input())
while t > 0:
    t -= 1
    solve()