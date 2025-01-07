import math
t = int(input())

    

a = [1] * 1000003
b = [0] * 1000003
ans = []
m = {}
a[0] = a[1] = 0
for i in range(2, 10001):
    if a[i] == 1:
        for j in range(i*i,1000003,i):
            a[j] = 0

def check(i: int):
    s = str(i)[::-1]
    return int(s) != i and a[int(s)] == 1


for i in range(11,1000003):
    s = str(i)[::-1]
    if a[i] and check(i) and int(s) not in m:
        b[i] = b[i-1] + 1
        m[i] = s
        ans.append(i)
        # print(i, b[i], sep=" ")
    else: b[i] = b[i-1]
    # print(i, a[i], sep=" ")

while t > 0:
    t -= 1
    n = int(input())
    for i in ans:
        if i < n and int(m[i]) < n:
            print(i, m[i], sep=" ", end=" ")
    print()

