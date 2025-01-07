import math
class PhanSo:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau

    def output(self):
        tmp = math.gcd(self.tu, self.mau)
        self.tu = self.tu // tmp
        self.mau = self.mau // tmp
        print(self.tu, "/", self.mau, sep="")

a = input().split()
rec = PhanSo(int(a[0]), int(a[1]))
rec.output()
