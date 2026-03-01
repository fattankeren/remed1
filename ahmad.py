penuh = 150
ton = float(input("Ton muatan: "))

liter = ton * 5
solar = liter * 18500
sewa = 1000000

if ton < penuh:
    denda = ton * 0.1
else:
    denda = 0

print("Biaya solar:", solar)
print("Total biaya:", solar + sewa + denda)