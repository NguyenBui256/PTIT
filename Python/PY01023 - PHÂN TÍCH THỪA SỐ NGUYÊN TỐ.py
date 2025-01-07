import math

t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    print("1 ", end="")
    for i in range (2,int(math.sqrt(n)+1)):
        if n % i == 0:
            cnt = 0
            while n % i == 0:
                cnt += 1
                n /= i
            if cnt > 0:
                print("* %d^%d " % (i,cnt), end="")
    if n > 1:
        print("* %d^%d" % (n,1), end="")
    print()
            