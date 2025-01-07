import math

F = []
F.append(1)
F.append(1)
for i in range(2,93):
    x = F[i-1] + F[i-2]
    F.append(x)

t = int(input())
while t > 0:
    t -= 1
    n = input().split()
    a = int(n[0])
    b = int(n[1])
    for i in range (a-1,b):
        print(F[i], end=" ")
    print()