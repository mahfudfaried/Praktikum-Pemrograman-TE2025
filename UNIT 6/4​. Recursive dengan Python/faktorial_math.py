import math
def hitung_faktorial(n):
    return math.factorial(n)

def main():
    try:
        nilai = int(input("Masukkan nilai yang ingin dihitung faktorialnya: "))
        hasil = hitung_faktorial(nilai)
        print("Faktorial dari", nilai, "adalah", hasil)
    except ValueError:
        print("Masukkan nilai bilangan bulat.")

if __name__ == "__main__":
    main()