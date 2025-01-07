a = []
s = ""
while True:
    try:
        s = input()
        if s == "":
            break
        arr = s.split()
        for i in arr:
            ok = 1
            if i[-1] in ".!?":
                ok = 0
                i = i[:len(i) - 1]
                a.append(i)
            if ok: a.append(i)
            else:
                for j in range (0,len(a)):
                    tmp = ""
                    if j == 0:
                        print(a[j].title(),end=" ")
                    else:  
                        print(a[j].lower(),end=" ")
                print()
                a = []
    except EOFError:
        break