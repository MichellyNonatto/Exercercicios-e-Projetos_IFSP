const util = require("util");

class Logger {
    inspectOpts = {
        colors: true,
    };

    #readValue() {
        return util.format("Valor lido: [%d]!", 100);
    }

    info() {
        const debugInfo = util.debuglog("INFO");
        util.inspect.styles["string"] = "blue";

        debugInfo(util.inspect(this.#readValue(), this.inspectOpts));
    }

    error() {
        const debugError = util.debuglog("ERROR");
        util.inspect.styles["string"] = "red";
        debugError(util.inspect(this.#readValue(), this.inspectOpts));
    }

    warning() {
        const debugWarning = util.debuglog("WARNING");
        util.inspect.styles["string"] = "yellow";
        debugWarning(util.inspect(this.#readValue(), this.inspectOpts));
    }
}

module.exports = Logger;
