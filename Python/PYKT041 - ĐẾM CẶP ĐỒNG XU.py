n = int(input())
r = [0] * n
c = [0] * n
for i in range(n):
    b = input()
    cnt = 0
    for j in range(n):
        if b[j] == 'C':
            c[j] += 1
            cnt += 1
    r[i] = cnt
ans = 0
for i in range(n):
    ans += int(r[i] * (r[i] - 1) / 2)
    ans += int(c[i] * (c[i] - 1) / 2)
print(ans)