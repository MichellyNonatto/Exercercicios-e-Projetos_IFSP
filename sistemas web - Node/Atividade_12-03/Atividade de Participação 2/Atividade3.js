function listToList(vetor) {
    if (vetor instanceof Array) {
        let lista = null;

        for (let i = vetor.length - 1; i >= 0; i--) {
            lista = { valor: vetor[i], ponteiro: lista };
        }

        return lista;
    } else {
        throw new Error("O argumento deve ser um array.");
    }
}

console.log(listToList([1, 2, 3, 4, 5]));