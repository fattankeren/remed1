suhu = []
for i in range(10):
    suhu.append(float(input("Suhu: ")))

rata = sum(suhu) / 10
tertinggi = max(suhu)
jam = suhu.index(tertinggi)

print("Rata-rata:", rata)
print("Tertinggi pada jam ke:", jam)