kursi = [[0]*5 for _ in range(5)]

baris = int(input("Baris (0-4): "))
kolom = int(input("Kolom (0-4): "))

if kursi[baris][kolom] == 0:
    kursi[baris][kolom] = 1
    print("Berhasil dipesan")
else:
    print("Kursi penuh")

for row in kursi:
    print(row)