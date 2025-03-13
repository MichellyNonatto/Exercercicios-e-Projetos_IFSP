const util = require("util");

const inspectOpts = {
    colors: true,
}

function info() {
    const debugInfo = util.debuglog("INFO");
    util.inspect.styles["string"] = "blue";
    debugInfo(
        (
            "Valor lido: [%d]!",
            inspectOpts
        ),
        100
    );
}

function error() {
    const debugError = util.debuglog("ERROR");
    util.inspect.styles["string"] = "red";
    debugError(
        (
            "Valor lido: [%d]!",
            inspectOpts
        ),
        100
    )
}

function warning() {
    const debugWarning = util.debuglog("WARNING");
    util.inspect.styles["string"] = "yellow";
    debugWarning(
        (
            "Valor lido: [%d]!",
            inspectOpts
        ),
        100
    )
}

module.exports = {
    info: info,
    error: error,
    warning: warning,
}