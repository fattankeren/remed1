let workers = parseInt(prompt("Jumlah pekerja:"));
let houses = parseInt(prompt("Jumlah rumah:"));

let totalBat = houses * 50;
let totalPerJam = workers * 12;

let jam = totalBat / totalPerJam;
let menit = jam * 60;

console.log(`Waktu: ${Math.floor(jam)} jam ${Math.floor(menit % 60)} menit`);