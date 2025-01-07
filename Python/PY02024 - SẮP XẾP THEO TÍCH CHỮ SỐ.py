from functools import cmp_to_key
import math

def sum(n):
    sum = 1
    s = str(n)
    for i in s:
        sum *= int(i)
    return sum

def cmp(a,b):
    if sum(a) != sum(b):
        return sum(a) - sum(b)
    else: return a - b

t = 1
t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    a = [int(x) for x in input().split()]
    a = sorted(a,reverse=False,key=cmp_to_key(cmp))
    for i in a:
        print(i,end=" ")
    print()