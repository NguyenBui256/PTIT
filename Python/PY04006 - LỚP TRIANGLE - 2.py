from decimal import Decimal
import math
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def distance(self, p):
        return math.sqrt((self.x - p.x) * (self.x - p.x)  + (self.y - p.y) * (self.y - p.y))

class Triangle:
    def __init__(self, p1, p2, p3):
        self.p1= p1
        self.p2= p2
        self.p3= p3
    def output(self) :
        a = self.p1.distance(self.p2)
        b = self.p2.distance(self.p3)
        c = self.p1.distance(self.p3)
        if(max(a, b, c) * 2 >= a + b + c) : print('INVALID')
        else : print('{:.2f}'.format(math.sqrt((a+b+c)*(-c+a+b)*(c-a+b)*(a-b+c))/4))

a = []
t = int(input())
for i in range(t):
    a += [float(i) for i in input().split()]    
i = 0
for index in range(t):
    p1 = Point(a[i], a[i + 1])
    p2 = Point(a[i + 2], a[i + 3])
    p3 = Point(a[i + 4], a[i + 5])
    h = Triangle(p1, p2, p3)
    h.output()
    i += 6