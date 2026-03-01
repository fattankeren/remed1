let data = [];

for (let i = 0; i < 10; i++) {
    data.push(parseInt(prompt("0 hadir, 1 tidak:")));
}

let hadir = data.filter(x => x === 0).length;
let persen = (hadir / 10) * 100;

console.log("Jumlah hadir:", hadir);
console.log("Persentase:", persen + "%");