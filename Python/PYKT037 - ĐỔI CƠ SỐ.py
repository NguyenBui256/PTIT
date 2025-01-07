from functools import cmp_to_key
import math

t = int(input())
for z in range(t):
    n, b = map(int, input().split())
    ans = ""
    while n > 0:
        m = int(n % b)
        n = int(n / b)
        if m > 9:
            ans += str(chr(m - 10 + ord('A')))
        else: ans += str(m)
    print(ans[::-1])



    
