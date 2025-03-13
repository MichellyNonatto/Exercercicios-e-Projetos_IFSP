function toUpperCase(str) {
    let resultado = "";

    for (let i = 0; i < str.length; i++) {
        let char = str[i];
        
        if (char >= 'a' && char <= 'z') {
            char = String.fromCharCode(char.charCodeAt(0) - 32);
        }

        resultado += char;
    }

    return resultado;
}

console.log(toUpperCase("hello world")); 
