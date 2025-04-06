function dobrarEm5Segundos(x) {
    return new Promise((resolve, reject) => {
        if (typeof (x) === 'number') {
            setTimeout(() => {
                resolve(x * 2);
            },(5000));
        } else {
            reject("Valor informado é inválido!");
        }
    })
}

const value = dobrarEm5Segundos(8)

value.then((data) => {
    console.log(data);

}).catch ((error) => {
    console.log(error)
})