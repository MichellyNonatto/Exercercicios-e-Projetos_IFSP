function firstPromise(numInt) {
    return new Promise((resolve, reject) => {
        if (typeof numInt === "number" && numInt > 2) {
            resolve(numInt);
        } else {
            reject("Valor informado é inválido");
        }
    });
}

function secondPromise(value) {
    return new Promise((resolve, reject) => {
        if ((value + 1) % 2 === 0) {
            resolve(value);
        } else {
            reject("Valor ímpar é inválido.");
        }
    });
}

async function executar() {
    try {
        const valor = await firstPromise(5);
        const resultado = await secondPromise(valor);
        console.log(resultado); 
        
    } catch (erro) {
        console.error(erro); 
    }
}

executar();
