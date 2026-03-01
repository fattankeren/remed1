let suhu = [];

for(let i=0;i<10;i++){
    suhu.push(parseFloat(prompt("Suhu:")));
}

let total = suhu.reduce((a,b)=>a+b,0);
let rata = total/10;

let tertinggi = Math.max(...suhu);
let jam = suhu.indexOf(tertinggi);

console.log("Rata-rata:", rata);
console.log("Tertinggi pada jam ke:", jam);