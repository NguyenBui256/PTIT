import math

t = int(input())
while t > 0:
    t -= 1
    s = input()
    sum = 1
    for i in s:
        if i != '0':
            sum *= ord(i) - ord('0')
    print(sum)

    