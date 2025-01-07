class Student:
    id: str
    name: str
    lop: str
    def __init__(self, id, name, lop):
        self.id = id
        self.name = name
        self.lop = lop

n = int(input())
ls = []
score = {}
for i in range (n):
    ls.append(Student(input(), input(), input()))
for i in range(n):
    s = input().split(" ")
    score[s[0]] = 10
    for char in s[1]:
        if char == 'm':
            score[s[0]] -= 1
        elif char == 'v':
            score[s[0]] -= 2
    if score[s[0]] < 0:
        score[s[0]] = 0
for i in ls:
    print(i.id, i.name, i.lop, score[i.id], sep=" ", end="")
    if score[i.id] == 0:
        print(" KDDK")
    else: print()
