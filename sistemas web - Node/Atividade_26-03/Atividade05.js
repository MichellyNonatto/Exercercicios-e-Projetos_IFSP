function sumFunc(value1, value2) {
    let result = value1 + value2;

    return new Promise((resolve, reject) => {
        if ((result % 2) === 0) {
            resolve(result);
        } else {
            reject(result);
        }
    });
}


function callbackSucess() {
    console.log("Resposta gerada com sucesso!");
}

function callbackError() {
    console.log("");
}

sumFunc(1, 1)
    .then(callbackSucess)
    .catch(callbackError)
