import math

t = int(input())
while t > 0:
    t -= 1
    b = int(input())
    s = input()
    n = len(s)
    k = 0
    ans = ""
    if b == 2:
        print(s)
        continue
    elif b == 4:
        k = 2
    elif b == 8:
        k = 3
    else: k = 4
    while n % k != 0:
        s = "0" + s
        n += 1
    for i in range(n-k,-1,-k):
        tmp = s[i:i+k]
        sum = 0
        mul2 = 1
        for j in range(k-1,-1,-1):
            sum += mul2 * (ord(tmp[j]) - ord('0'))
            mul2 *= 2
        if sum > 9:
            sum = chr(ord('A') + (sum - 10))
        ans += str(sum)
    print(ans[::-1])