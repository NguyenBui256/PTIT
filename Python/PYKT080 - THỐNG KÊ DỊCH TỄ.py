n, m = map(int,input().split())
ans = 0
dx = [0,0,-1,-1,-1,1,1,1]
dy = [1,-1,0,1,-1,0,1,-1]
vst = [[0 for i in range(m)] for j in range(n)]
a = [] * n

def loang(i,j):
    global ans
    for k in range(8):
        i1 = i + dx[k]
        j1 = j + dy[k]
        if i1 >= 0 and i1 < n and j1 >= 0 and j1 < m and vst[i1][j1] == 0 and a[i1][j1] != 0:
            ans += a[i1][j1]
            vst[i1][j1] = 1

for i in range(n):
    a.append([int(x) for x in input().split()])

for i in range(n):
    for j in range(m):
        if a[i][j] == -1:
            loang(i,j)
print(ans)