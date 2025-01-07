import math

s = input().split()
n = int(s[0])
k = int(s[1])
x = 1
for i in range (10**(k-1), 10**k - 1):
    if math.gcd(n,i) == 1:
        print(i, end=" ")
        x += 1
    if x > 10: 
        x = 1
        print()

    
            