import math
class PhanSo:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau

    def output(self, b):
        mau = self.mau * b.mau
        tu = self.tu * b.mau + b.tu * self.mau
        tmp = math.gcd(tu, mau)
        tu = tu // tmp
        mau = mau // tmp
        print(tu, "/", mau, sep="")

a = input().split()
x = PhanSo(int(a[0]), int(a[1]))
b = PhanSo(int(a[2]), int(a[3]))
x.output(b) 