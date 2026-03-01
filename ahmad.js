let ton = parseFloat(prompt("Ton muatan:"));
let liter = ton * 5;
let solar = liter * 18500;
let sewa = 1000000;
let denda = ton < 150 ? ton * 0.1 : 0;

console.log("Total:", solar + sewa + denda);