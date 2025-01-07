t = int(input())
for _ in range(t):
    m = {}
    n = int(input())
    ls = [int(x) for x in input().split()]
    for i in ls:
        if i in m:
            m[i] += 1
        else: 
            m[i] = 1
    for key,value in m.items():
        if value % 2 == 1:
            print(key)
            break