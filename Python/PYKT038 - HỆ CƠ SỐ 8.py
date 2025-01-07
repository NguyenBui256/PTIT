from functools import cmp_to_key
import math

s = input()
while len(s) % 3 != 0:
    s = "0" + s
ans = ""
n = len(s)
for i in range(n-3,-1,-3):
    tmp = s[i:i+3]
    cnt = int(tmp[0]) * 4 + int(tmp[1]) * 2 + int(tmp[2]) * 1
    ans += str(cnt)
print(ans[::-1])



    
