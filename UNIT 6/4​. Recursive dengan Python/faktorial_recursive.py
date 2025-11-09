import math

def hitung_faktorial(n):
    if n == 0:
        return 1
    else:
        return n * hitung_faktorial(n-1)

def main():
    try:
        nilai = int(input("Masukkan nilai yang ingin dihitung faktorialnya: "))
        if nilai < 0:
            print("Masukkan nilai non-negatif.")
        else:
            hasil = hitung_faktorial(nilai)
            print("Faktorial dari", nilai, "adalah", hasil)
    except ValueError:
        print("Masukkan nilai bilangan bulat.")

if __name__ == "__main__":
    main()