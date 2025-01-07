import math

t = int(input())
while t > 0:
    t -= 1
    s = input()
    Min = 0
    n = len(s)
    i = 0
    while i < n:
        tmp = ""
        if s[i].isdigit():
            while i < n and s[i].isdigit():
                tmp += s[i]
                i += 1
            # print(tmp)
            if int(tmp) > Min:
                Min = int(tmp)
        else: i += 1
    print(Min)

    
            