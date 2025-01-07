import math

t = int(input())
while t > 0:
    t -= 1
    s = input()
    v = s[len(s) - 2: len(s)]
    if v == "86":
        print("YES")
    else : print("NO")