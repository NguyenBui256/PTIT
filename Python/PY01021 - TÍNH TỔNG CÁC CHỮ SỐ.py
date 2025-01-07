t = int(input())
for z in range(t):
    s = input()
    ans = []
    sum = 0
    for i in s:
        if i.isdigit(): 
            sum += int(i)
        else: ans.append(i)
    ans.sort()
    for i in ans: print(i,end="")
    print(str(sum))