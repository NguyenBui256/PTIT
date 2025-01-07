import math

t = int(input())
while t > 0:
    s = input().split()
    a = float(s[0])
    b = float(s[1])
    c = float(s[2])
    print(math.ceil(math.log(c/a,(1+b/100))))
    t -= 1
