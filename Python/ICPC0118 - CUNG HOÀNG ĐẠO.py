t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    if m == 1:
        if n <= 19: print("Ma Ket")
        else: print("Bao Binh")
    elif m == 2:
        if n <= 18: print("Bao Binh")
        else: print("Song Ngu")
    elif m == 3:
        if n <= 20: print("Song Ngu")
        else: print("Bach Duong")
    elif m == 4:
        if n <= 19: print("Bach Duong")
        else: print("Kim Nguu")
    elif m == 5:
        if n <= 20: print("Kim Nguu")
        else: print("Song Tu")
    elif m == 6:
        if n <= 20: print("Song Tu")
        else: print("Cu Giai")
    elif m == 7:
        if n <= 22: print("Cu Giai")
        else: print("Su Tu")
    elif m == 8:
        if n <= 22: print("Su Tu")
        else: print("Xu Nu")
    elif m == 9:
        if n <= 22: print("Xu Nu")
        else: print("Thien Binh")
    elif m == 10:
        if n <= 22: print("Thien Binh")
        else: print("Thien Yet")
    elif m == 11:
        if n <= 22: print("Thien Yet")
        else: print("Nhan Ma")
    else: 
        if n <= 21: print("Nhan Ma")
        else: print("Ma Ket")