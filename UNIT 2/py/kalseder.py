def hari (i):
    switcher = {
        1: "Ini kode hari SENIN",
        2: "Ini kode hari SELASA",
        3: "Ini kode hari RABU",
        4: "Ini kode hari KAMIS",
        5: "Ini kode hari JUMAT",
        6: "Ini kode hari SABTU",
        7: "Ini kode hari AHAD"
    }
    return switcher.get(i, "Kode yang anda masukkan tidak dikenal")
print(hari(7))
