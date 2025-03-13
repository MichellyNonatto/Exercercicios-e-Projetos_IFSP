function listToArray(lista) {
    let vetor = [];
    let aux = lista;

    while( aux != null ){
        vetor.push(aux.valor);
        aux = aux.ponteiro;
    };

    return vetor;
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

console.log(listToArray(lista));