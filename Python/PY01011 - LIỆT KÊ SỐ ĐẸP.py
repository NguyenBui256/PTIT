import math

def check(n):
    st = str(n)
    if len(st) % 2 != 0 or st != st[::-1]: return False
    for i in st:
        if (int(i) - int('0')) % 2 == 1: return False
    return True

s = []

for i in range(22,1000001,2):
    if check(i):
        s.append(i)
s.sort()

t = int(input())
for z in range(t):
    n = int(input())
    cnt = 1
    for i in s:
        if i >= n: break
        print(i,end=" ")
    print()