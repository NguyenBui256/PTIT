n,k = map(int, input().split())
a = [int(x) for x in input().split()]
m = {}
b = [0] * (k+2)
for i in a:
    m[i] = 1
a = sorted(list(m))
n = len(a)

def kq():
    for i in range(1,k+1):
        print(a[b[i] - 1], end=" ")
    print()
    return

def ql(i): 
    if i == k: 
        kq()
        return
    for j in range(b[i] + 1, n + 1):
        b[i+1] = j
        ql(i+1)

ql(0)

