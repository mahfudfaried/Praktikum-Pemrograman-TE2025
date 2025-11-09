print("Menghitung luas segitiga")
a = int(input("Sisi pertama: "))
b = int(input("Sisi kedua: "))
c = int(input("Sisi ketiga: "))

def luas(a,b,c):
    s = (a + b + c) / 2
    return (s*(s-a)*(s-b)*(s-c)) ** 0.5
print("Luas segitiga:", luas(a,b,c))