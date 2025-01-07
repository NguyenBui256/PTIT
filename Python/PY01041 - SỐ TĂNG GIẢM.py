def check(i,s):
    for j in range(0,i):
        if s[j] >= s[j+1]:
            return False
        
    for j in range(i,len(s) - 1):
        if s[j] <= s[j+1]:
            return False
    return True

t = int(input())
while t > 0:
    t -= 1
    s = input()
    n = len(s)
    ok = 0
    for i in range(1,n-1):
        if check(i,s):
            ok = 1
            break
    if ok == 1: print("YES")
    else: print("NO")