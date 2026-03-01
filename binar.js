let kursi = Array.from({length:5}, () => Array(5).fill(0));

let baris = parseInt(prompt("Baris 0-4:"));
let kolom = parseInt(prompt("Kolom 0-4:"));

if (kursi[baris][kolom] === 0) {
    kursi[baris][kolom] = 1;
    console.log("Berhasil dipesan");
} else {
    console.log("Kursi penuh");
}

console.log(kursi);