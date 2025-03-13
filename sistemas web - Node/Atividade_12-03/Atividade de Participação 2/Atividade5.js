function prepend(valor, lista) {
    return { valor: valor, ponteiro: lista };
}


let lista = {
    valor: 3,
    ponteiro: {
        valor: 4,
        ponteiro: null
    }
};

console.log("Lista original:", JSON.stringify(lista, null, 2));

let novaLista = prepend(2, lista);
novaLista = prepend(1, novaLista)

console.log("Nova lista após prepend:", JSON.stringify(novaLista, null, 2));