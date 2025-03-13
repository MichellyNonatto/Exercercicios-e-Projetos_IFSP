class Stats {
    constructor(x, y) {
        this.x = x;
        this.y = y;
    }

    #soma(x, y) {
        return x + y;
    }

    #quadrado(x) {
        return x * x;
    }

    media(dados) {
        return dados.reduce(this.#soma, 0) / dados.length;
    }

    desvioPadrao(dados) {
        const mediaCalculada = this.media(dados);
        return Math.sqrt(
            dados.map(x => x - mediaCalculada).map(this.#quadrado).reduce(this.#soma, 0) / (dados.length - 1)
        );
    }
}

module.exports = Stats;
