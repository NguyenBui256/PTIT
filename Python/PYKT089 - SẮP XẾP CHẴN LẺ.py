n = int(input())
le = []
chan = []
a = [int(x) for x in input().split()]
if (len(a) < n): 
    while len(a) < n: 
        k = [int(x) for x in input().split()] 
        for num in k: a.append(num)
for i in range(0,n):
    if a[i] % 2 == 1:
        le.append(a[i])
        a[i] = 1
    else: 
        chan.append(a[i])
        a[i] = 0
le.sort(reverse=True)
chan.sort()
l = 0
r = 0
for i in range(0,n):
    if a[i] == 1 and l < len(le):
        print(le[l],end=" ")
        l += 1
    elif a[i] == 0 and r < len(chan):
        print(chan[r],end=" ")
        r += 1