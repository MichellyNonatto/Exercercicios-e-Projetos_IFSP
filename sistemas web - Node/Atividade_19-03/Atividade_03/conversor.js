
function quilogramaParaLibra(quilogramas) {
    return quilogramas * 2.205;
}

function metroParaPe(metros) {
    return metros * 3.28084;
}

function celsiusParaFahrenheit(celcius) {
    return (celcius * 9/5) + 32;
}

module.exports = {
    quilogramaParaLibra,
    metroParaPe,
    celsiusParaFahrenheit
};