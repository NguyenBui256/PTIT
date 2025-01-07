t = int(input())
while t > 0:
    t -= 1
    n = input()
    if n[0] == n[len(n) - 1]:
        print("YES")
    else: 
        print("NO")
    
            