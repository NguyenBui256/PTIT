t = int(input())
for _ in range (t):
    n, m = map(int, input().split())
    a = [int(x) for x in input().split()]
    k = 0
    am = []
    duong = []
    for i in range(n):
        if a[i] > k:
            k = a[i]
    for i in range(n):
        if a[i] == k:
            a.insert(i,m)
            break
    for i in range(n+1):
        if a[i] < 0: am.append(a[i])
        else: duong.append(a[i])
    for i in am: print(i, end = ' ')
    for i in duong: print(i, end = ' ')
    print()