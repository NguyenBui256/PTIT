x = input()
n = len(x)
a = [0] * n

def ql(s,i):
    if i == n:
        print(s)
        return
    for j in range(n):
        if a[j] == 0:
            a[j] = 1
            ql(s+x[j],i+1)
            a[j] = 0

ql("",0)