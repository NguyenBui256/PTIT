t = int(input())
m = {}
for _ in range(t):
    s = input()
    if s in m: m[s] += 1
    else: m[s] = 1
print(len(m))