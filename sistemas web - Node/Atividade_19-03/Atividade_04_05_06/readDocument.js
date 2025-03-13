const fs = require("node:fs");
const path = require("node:path");

class ReadDocument {
    #dirpath;
    #localFile;

    constructor(filename) {
        this.#dirpath = path.dirname(process.argv[1]);
        this.#localFile = path.join(this.#dirpath, filename);
    }

    get emFluxo() {
        const init = Date.now();
        let timeOut = null;
        const stream = fs.createReadStream(this.#localFile, "utf-8");

        stream.on("end", () => {
            const end = Date.now();
            timeOut = end - init;
            console.log(`Total de tempo em execução: ${timeOut}ms`);
        });

        stream.on("error", (err) => {
            console.error("Houve um erro durante o processo:", err);
        });

        stream.pipe(process.stdout);
    }

    get umaVez() {
        let timeOut = null;
        const init = Date.now();
        
        try {
            const text = fs.readFileSync(this.#localFile, "utf-8");
            const end = Date.now();
            timeOut = end - init;
            
            console.log(text);
            console.log(`Total de tempo em execução: ${timeOut}ms`);
        } catch (error) {
            console.error("Houve um erro durante o processo:", error);
        }
    }
}

module.exports = ReadDocument;
