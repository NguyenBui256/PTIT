import math

t = int(input())
while t > 0:
    t -= 1
    n = input()
    cnt = 1
    if int(n) % 7 == 0:
        print(n)
        continue
    ok = 0
    while int(n) % 7 != 0 or cnt < 1000:
        cnt += 1
        n = str(int(n) + int(n[::-1]))
        if int(n) % 7 == 0:
            print(n)
            ok = 1
            break
    if ok == 0:
        print("-1")

    
            