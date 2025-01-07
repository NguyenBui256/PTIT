import math

def check(n):
    if n < 2: return False
    for i in range(2,int(math.sqrt(n)+1)):
        if n % i == 0:
            return False
    return True
b = [0] * 1500
x = 0
for i in range(2,8000):
    if check(i):
        b[x] = i
        x += 1
n, m = map(int,input().split())
x = 0
print(m, end=" ")
while x < n:
    m += b[x]
    x += 1
    print(m, end=" ")
    
    