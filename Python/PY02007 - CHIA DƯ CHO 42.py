import math
x = 0
b = [0] * 42
s = 0
while True:
    a = [int(x) for x in input().split()]
    x += len(a)
    for i in a: 
        b[i%42] = 1
    if x == 10: break
for i in b:
    if i > 0: s += 1
print(s)