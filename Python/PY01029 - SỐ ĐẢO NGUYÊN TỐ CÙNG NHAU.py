import math

t = 1
t = int(input())
while t > 0:
    t -= 1
    n = input()
    r = n[::-1]
    if math.gcd(int(n), int(r)) == 1:
        print("YES")
    else: print("NO")

    
            