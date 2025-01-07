import math

n = int(input())
a = input().split()
cnt = 0
for i in range (len(a) - 1):
    if a[i] != a[i+1]:
        cnt+=1
print(cnt)