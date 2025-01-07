import math

t = int(input())
while t > 0:
    t -= 1
    n = input()
    sum = ord(n[len(n)-1]) - ord('0')
    ok = 1
    for i in range(0,len(n)-1):
        if abs(ord(n[i]) - ord(n[i+1])) != 2:
            ok = 0
            break
        sum += (ord(n[i]) - ord('0'))
    if ok == 0: 
        print("NO")
    else:
        if sum % 10 == 0:
            print("YES")
        else: print("NO")
    
            