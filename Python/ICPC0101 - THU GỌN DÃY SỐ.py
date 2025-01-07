n = int(input())
s = []
a = [int(x) for x in input().split()]
for x in a:
    if len(s) == 0: s.append(x)
    else: 
        if (s[-1] + x) % 2 == 0: s.pop()
        else: s.append(x)
print(len(s))