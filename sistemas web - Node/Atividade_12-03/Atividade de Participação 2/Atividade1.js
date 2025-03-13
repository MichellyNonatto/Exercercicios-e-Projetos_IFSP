class Vec {

    constructor(x, y){
        this.x = x;
        this.y = y;
    };
    
    plus(vetor) {
        if (vetor instanceof Vec) {
            return new Vec(this.x + vetor.x, this.y + vetor.y);
        } else {
            throw new Error("O argumento deve ser um vetor (instaância da claase Vec)");
        };
    };

    minus(vetor) {
        if (vetor instanceof Vec) {
            return new Vec(this.x - vetor.x, this.y - vetor.y);
        } else {
            throw new Error("O argumento deve ser um vetor (instaância da claase Vec)");
        };
    };
    
    get length() {
        return Math.sqrt(this.x ** 2 + this.y ** 2);
    };
};

const vec1 = new Vec(3, 4);
const vec2 = new Vec(1, 0);

console.log("A soma dos vetores vec1 e vec2 são de:", vec1.plus(vec2));
console.log("A soma dos vetores vec1 e vec1 são de:", vec1.plus(vec1));

console.log("A subtração dos vetores vec1 e vec2 são de:", vec1.minus(vec2));
console.log("A subtração dos vetores vec1 e vec1 são de:", vec1.minus(vec1));

console.log("A distância do vec1 ao ponto 0 é de:", vec1.length);
console.log("A distância do vec2 ao ponto 0 é de:", vec2.length);