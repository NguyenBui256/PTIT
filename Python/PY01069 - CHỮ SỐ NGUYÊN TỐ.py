n = int(input())

a = []

def check(s):
    ok2 = ok3 = ok5 = ok7 = False
    s = str(s)
    for i in s:
        if i == '2': ok2 = True
        if i == '3': ok3 = True
        if i == '5': ok5 = True
        if i == '7': ok7 = True
    return ok2 and ok3 and ok5 and ok7 and s[-1] != '2'

def ql(s, k):
    if len(str(s)) == k:
        if check(s): a.append(s)
        return
    for j in [2,3,5,7]:
        ql(s*10+j,k)
        
for i in range (4,n+1):
    ql(0, i)
a.sort()
for i in a: print(i)