stok = 10
while True:
    nama = input("Nama obat (ketik keluar): ")
    if nama == "keluar":
        break
    stok -= 1
    print("Stok sisa:", stok)
    if stok <= 0:
        print("Stok habis!")
        break