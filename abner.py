workers = int(input("Jumlah pekerja: "))
houses = int(input("Jumlah rumah: "))

bat_per_jam_per_orang = 12
total_bat_per_jam = workers * bat_per_jam_per_orang
total_bat = houses * 50

jam = total_bat / total_bat_per_jam
menit = jam * 60

print("Waktu:", int(jam), "jam", int(menit % 60), "menit")