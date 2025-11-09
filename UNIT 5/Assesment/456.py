import math

def cariAkar(a, b, c):
    D = (b * b) - (4 * a * c)
    if D < 0:
        return None  # menandakan akar tidak real
    akar1 = (-b + math.sqrt(D)) / (2 * a)
    return akar1
# Prototype konsep:
# def cariAkar(a: float, b: float, c: float) -> float:
def main():
    a = float(input("Masukkan nilai a: "))
    b = float(input("Masukkan nilai b: "))
    c = float(input("Masukkan nilai c: "))

    hasil = cariAkar(a, b, c)

    if hasil is None:
        print("Akar tidak real")
    else:
        print(f"Akar persamaan adalah: {hasil:.2f}")

main()
