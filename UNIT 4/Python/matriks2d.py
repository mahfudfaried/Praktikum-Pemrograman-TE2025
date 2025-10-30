def main():
    matriks = [[None for i in range(4)] for j in range(3)]
    
    print("Input elemen array: \n")
    for baris in range(0, 3):
        for kolom in range(0, 4):
            print("matriks[{}][{}]".format(baris + 1, kolom + 1))
            matriks[baris][kolom] = int(input())
        print()
        
    print("Isi array: \n")
    for baris in range(3):
        for kolom in range(4):
            print(matriks[baris][kolom], end=" ")
        print()

main()