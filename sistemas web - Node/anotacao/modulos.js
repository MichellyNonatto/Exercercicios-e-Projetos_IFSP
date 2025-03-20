const fs = require("node:fs");
const path = require("node:path");

function emFluxo(filename) {
    const init = Date.now();

    const dirpath = path.dirname(process.argv[1]);
    const localFile = path.join(dirpath, filename);

    // em fluxo
    const stream = fs.createReadStream(localFile, "utf-8");
    stream.on("end", function () {
        const end = Date.now();
        console.log(`Total time: ${end - init} ms`);
    });
    stream.pipe(process.stdout);
}


function umaVez(filename) {
    const init = Date.now();

    const localFile = path.join(__dirname, filename);

    // uma única vez
    const text = fs.readFileSync(localFile, "utf-8");
    const end = Date.now
    console.log(text);
    console.log(`Total time: ${end - init} ms`);
}

module.exports = { emFluxo, umaVez }