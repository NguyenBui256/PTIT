import math

try:
    with open("CONTACT.in", 'r') as f:
        m = {}
        a = []
        for line in f:
            s = line.strip().lower()
            if s not in m:
                a.append(s)
                m[s] = 1
        a.sort()
        for i in a:
            print(i)
finally:
    f.close()