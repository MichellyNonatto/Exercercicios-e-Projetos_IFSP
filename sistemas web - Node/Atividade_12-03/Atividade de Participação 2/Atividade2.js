function deepEqual(value1, value2) {
    if (value1 === value2) {
        return true;
    };

    if (typeof value1 !== "object" || typeof value2 !== "object" || value1 === null || value2 === null) {
        return false;
    }

    const keys1 = Object.keys(value1);
    const keys2 = Object.keys(value2);

    if (keys1.length !== keys2.length) {
        return false;
    }
    
    for (let key of keys1) {
        if (!keys2.includes(key) || !deepEqual(value1[key], value2[key])) {
            return false;
        }
    }

    return true;
};

// Declaração de objetos
const obj1 = {
    nome: "João",
    idade: 25,
    endereco: { cidade: "São Paulo", cep: "12345" }
};

const obj2 = {
    nome: "João",
    idade: 25,
    endereco: { cidade: "São Paulo", cep: "12345" }
};


console.log(deepEqual(1, 67));
console.log(deepEqual(1, 1));
console.log(deepEqual(obj1, obj2));