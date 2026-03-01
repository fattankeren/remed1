let jarak = parseFloat(prompt("Jarak:"));
let rating = parseInt(prompt("Rating:"));

let harga = jarak * 2500;

if(jarak > 50) harga += 20000;
if(rating >= 4) harga += harga * 0.05;

console.log("Total:", harga);