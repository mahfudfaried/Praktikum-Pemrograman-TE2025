def tiga():
    return 3
def kali(x):
    if x < 2:
        return 1
    else:
        return (x*tiga())
print(kali(5))