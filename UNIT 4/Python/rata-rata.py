numbers = [None for i in range(10)]
count = 10
sum = 0
average = 0.0

print("\nMasukan 10 bilangan: ")

for i in range(0, 10):
    numbers[i] = int(input("Data ke-" + str(i + 1) + " > "))
    sum += numbers[i]

average = float(sum) / count
print("\nNilai rata-ratanya adalah: ", average, "\n")