import math

t = int(input())
while t > 0:
    t -= 1
    s = input()
    for i in range(0,len(s)-1,2):
        for j in range (int(int(s[i+1]) - int('0'))):
            print(s[i], end="")
    print("\n")
