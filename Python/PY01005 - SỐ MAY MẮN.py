import math

s = input()
n = len(s)
cnt = 0
for i in range(n):
    if s[i] == "4" or s[i] == "7":
        cnt += 1
if cnt == 4 or cnt == 7:
    print("YES")
else: 
    print("NO")
