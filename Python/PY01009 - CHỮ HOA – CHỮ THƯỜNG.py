import math

s = input()
cnt = 0
cnt1 = 0
for i in range (len(s)):
    if s[i] >= 'a' and s[i] <= 'z':
        cnt += 1
    elif s[i] >= 'A' and s[i] <= 'Z':
        cnt1 += 1
if cnt >= cnt1:
    print(s.lower())
else: 
    print(s.upper())