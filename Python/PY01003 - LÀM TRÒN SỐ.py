
t = int(input())
for z in range(t):
    q = input()
    s = list(q)
    n = len(s)
    du = 0
    for i in range(n-1,0,-1):
        if int(s[i]) >= 5:
            s[i] = '0'
            du = 1
            tmp = int(s[i-1]) - int('0') + du
            if tmp == 10:
                s[i-1] = '0'
                du = 1
            else: 
                s[i-1] = str(tmp)
                du = 0
        else: s[i] = '0'
    if du == 1: print(1,end="")
    for i in s: print(i,end="")
    print()
            

