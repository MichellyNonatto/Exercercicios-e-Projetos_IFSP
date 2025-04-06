function doAction(){
    return new Promise((resolve) => {
        setTimeout(() =>{
            resolve("Olá mundo");
        }, (2000));
    });
}

let variavel = doAction()

variavel.then((data) => {
    console.log(data);
})