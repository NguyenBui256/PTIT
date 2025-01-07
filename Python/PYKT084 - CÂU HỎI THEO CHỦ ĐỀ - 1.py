t = int(input())
for _ in range(t):
    try: 
        sub = input()
        s = ""
        cnt = 0
        while True:
            try:
                s = input()
                if s == "":
                    break
                cnt += 1
            except EOFError:
                break
    except EOFError:
        break
    print(f"{sub}: {cnt}")