function nth(lista, posicao) {
    let listaAux = lista
    let index = 0;

    while (listaAux !== null) {
        if (index === posicao) {
            return listaAux.valor;
        }
        listaAux = listaAux.ponteiro;
        index++;
    }

    return undefined;
};

let lista = {
    valor: 1,
    ponteiro: {
        valor: 2,
        ponteiro: {
            valor: 3,
            ponteiro: {
                valor: 4,
                ponteiro: null
            }
        }
    }
};

console.log(nth(lista, 3));