s = input()
n = len(s)
while n % 3 != 0:
    s = " " + s
    n += 1
x = 0
for i in range(len(s)):
    x += 1
    if s[i] != " ":
        print(s[i],end="")
    if x == 3 and i != len(s) - 1:
        print(",",end="")
        x = 0
    