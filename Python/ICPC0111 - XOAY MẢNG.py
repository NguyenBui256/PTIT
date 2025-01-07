import math

t = int(input())
while t > 0:
    t -= 1
    s = input().split()
    arr = input().split()
    n = int(s[0])
    k = int(s[1])
    # print(k)
    for i in range(k, n):
        print(arr[i], end=" ")
    for i in range(k):
        print(arr[i], end=" ")
    print()