while True:
    n = int(input())
    a = []
    if n == 0:
        break
    for _ in range(n):
        a.append(int(input()))
    a.sort()
    if a[0] == a[-1]:
        print("BANG NHAU")
    else: print(a[0], a[-1],sep=" ")
