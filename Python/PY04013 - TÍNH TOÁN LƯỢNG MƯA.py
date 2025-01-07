class Station:
    id: str
    name: str
    def __init__(self, id, name):
        self.id = id
        self.name = name

n = int(input())
ls = []
time = {}
amount = {}
cnt = 1
for i in range (n):
    name = input().strip()
    if name not in amount:
        id = str.format("T%02d" % (cnt))
        cnt += 1
        ls.append(Station(id, name))
        amount[name] = 0
        time[name] = 0
    start = input().strip().split(":")
    end = input().strip().split(":")
    s = (int(end[0]) - int(start[0])) * 60 + int(end[1]) - int(start[1])
    x = int(input().strip())
    amount[name] += x
    time[name] += s
for i in ls:
    print(f"%s %s %.2f" % (i.id, i.name, amount[i.name] / (time[i.name] / 60)))

