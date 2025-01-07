import math

s = input().split()
n = int(s[0])
k = int(s[1])
x = 1
for i in range (n, k-1):
    for j in range (i+1,k):
        for z in range(j+1, k+1):
            if math.gcd(i,j) == 1 and math.gcd(j,z) == 1 and math.gcd(i,z) == 1:
                print("(%d, %d, %d)" % (i,j,z))

    
            