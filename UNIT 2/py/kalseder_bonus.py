print("Program Kalkulator sederhana")
print("* => Perkalian")
print("/ => Pembagian")
print("+ => Penjumlahan")
print("- => Pengurangan")
print("Contoh menghitung: 5 / 2. Lalu tekan ENTER")

operand1, operatore, operand2 = input("Silakan menghitung angka: ").split()

def kalkulator(operatore):
    switcher = {
        '*': lambda: float(operand1) * float(operand2),
        '/': lambda: float(operand1) / float(operand2),
        '+': lambda: float(operand1) + float(operand2),
        '-': lambda: float(operand1) - float(operand2),
    }
    return switcher.get(operatore, "Perintah Anda tidak valid, Silakan ulangi!")()
print(kalkulator(operatore))