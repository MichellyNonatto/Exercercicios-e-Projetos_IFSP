const Stats = require("./stats");

const stats = new Stats(0,0);
const dados = [1, 3, 5, 7, 9];

console.log(stats.media(dados));
console.log(stats.desvioPadrao(dados))