import math

t = int(input())
while t > 0:
    t -= 1
    n = input()
    a = n[0:2]
    b = n[len(n)-2:len(n)]
    # print(a,b)
    if a == b:
        print("YES")
    else: 
        print("NO")
