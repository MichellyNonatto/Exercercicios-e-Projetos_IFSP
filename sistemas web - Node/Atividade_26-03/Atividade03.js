function separarValores(value) {
    return new Promise((resolve, reject) => {
        if (typeof (value) != "number") {
            reject("Valor informado é inválido!");

        } else {
            if ((value % 2) === 0) {
                setTimeout(() => {
                    resolve(value);
                }, (2000));

            } else {
                setTimeout(() => {
                    resolve(value);
                }, (1000));
            }
        }
    });
}

let number = separarValores(2);
number.then((data) => {
    console.log(data);

}).catch((error) => {
    console.error(error);
})

try {
    const number2 = await separarValores(3)
    console.log(number2)
} catch (erro) {
    console.error(erro);
}
