data = []
for i in range(10):
    nilai = int(input("0 hadir, 1 tidak: "))
    data.append(nilai)

hadir = data.count(0)
persen = (hadir / 10) * 100

print("Jumlah hadir:", hadir)
print("Persentase:", persen, "%")