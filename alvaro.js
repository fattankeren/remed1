let stok = 10;
while(stok > 0){
    let nama = prompt("Nama obat (keluar untuk stop)");
    if(nama === "keluar") break;
    stok--;
    console.log("Sisa:", stok);
}