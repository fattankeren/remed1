jarak = float(input("Jarak: "))
rating = int(input("Rating (1-5): "))

harga = jarak * 2500

if jarak > 50:
    harga += 20000

if rating >= 4:
    harga += harga * 0.05

print("Total:", harga)