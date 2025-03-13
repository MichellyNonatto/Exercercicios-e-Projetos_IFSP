const arrayDeArrays = [[1, 2, 3], [4, 5], [6]];

const arrayFlattened = arrayDeArrays.reduce((acumulador, atual) => acumulador.concat(atual), []);

console.log(arrayFlattened);
