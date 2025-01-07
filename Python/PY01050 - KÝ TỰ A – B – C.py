def check(s):
    cntA = 0
    cntB = 0
    cntC = 0
    for i in s:
        if i == 'A': cntA+=1
        if i == 'B': cntB+=1
        if i == 'C': cntC+=1
    return cntA > 0 and cntB > 0 and cntC > 0 and cntA <= cntB and cntB <= cntC

def ql(s, k):
    if len(s) == k:
        if check(s):
            print(s)
        return
    for j in ['A','B','C']:
        tmp = s
        tmp += j
        ql(tmp,k)

n = int(input())
for i in range (3,n+1):
    ql("",i)
