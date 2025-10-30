import time

print("---Nilai Matkul Checker---")
ans = "Y"
while ans == "Y" or ans == "y":
    nama = input("Masukan nama\t: ")
    nim = input("Masukan NIM\t: ")
    matkul = input("Masukan mata kuliah\t: ")
    nilai = int(input("Masukan nilai\t: "))
    print("\nData berhasil diinput!")
   
    if 85 <= nilai <= 100:
        nilaihruf = 'A'
    elif 75 <= nilai < 85:
        nilaihruf = 'B'
    elif 65 <= nilai < 75:
        nilaihruf = 'C'
    elif nilai < 65:
        nilaihruf = 'D'
    else:
        nilaihruf = 'Nilai tidak valid'
 
    time.sleep(1)
    print('Sedang diproses')
    time.sleep(0.5)
    dots = '...'
    for dot in dots:
        print(dot)
        time.sleep(0.5)
    print('Nilai dari matkul Anda masuk kategori ' + nilaihruf + '\n')
    time.sleep(1)
    ans = input("Apakah anda ingin mengulangi? (Y/T)")

print('\nProgram Berhenti')
