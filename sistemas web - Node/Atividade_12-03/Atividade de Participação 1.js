/*
Atividade 1. Verifique o tipo das diferentes variáveis usandotypeof:
let variable1=10;
let variable2="hello";
let variable3=true;
*/

let variables = [10, "hello", true];
console.log("Exercício 1:");
for (value = 0; value <= variables.length - 1; value++) {
    console.log(typeof (variables[value]));
}
console.log("\n");

/*
Atividade 2. Acesse as propriedades do objeto a seguir:
let person = {
name:"John", 
age:30, 
city:"New York"
};
*/

let person1 = {
    name: "John",
    age: 30,
    city: "New York"
};

console.log(`Exercício 2:\n${person1.name}\n${person1.age}\n${person1.city}`);

/*
Atividade 3. Verifique o uso de var, let e const e veja as saídas do código em um script. Explique o porque do resultado apresentado:
var a=1;
let b=2;
const c=3;

a=10 // Qual a saída?
b=20 // Qual a saída?
c=30 // Qual a saída?
*/

var a = 1;
let b = 2;
const c = 3;

a = 10 // Qual a saída? 10
b = 20 // Qual a saída? 20
// c=30 // Qual a saída? A saída é um erro pois uma constante nunca será modificada "TypeError: Assignment to constant variable."

console.log(`Exercício 3:\n${a}\n${b}\n${c}`);

/*
Atividade 4. Verifique quais dos valores abaixo são Truthy e Falsy. Faça-outilizando a função Boolean(valor) e imprima o resutado: 
10 true
true  true
false false
{} true
undefined false
null false
'' false
'abba' true
0 false
*/

console.log(`Exercício 4:
${Boolean(10)}
${Boolean(true)}
${Boolean(false)}
${Boolean({})}
${Boolean(undefined)}
${Boolean(null)}
${Boolean('')}
${Boolean('abba')}
${Boolean(0)}
`
);

/*
Atividade 5. Verifique as comparações a seguir com os operadores == e ===.Qual será a saída para cada um deles? Teste em um script para ver se acertou:
5=="5" true
5==="5" false
5==5 true
5===5 true
*/

console.log(`Exercício 5:\n${5 == "5"}\n${5 === "5"}\n${5 == 5}\n${5 === 5}\n`);

/*
Atividade 6. Faça uma atribuição via desestruturação utilizando o objetoabaixo: 
let person={name:"Alice",age:25}; // faça aqui a atribuição via desestruturação
console.log(name); // Alice
console.log(age); // 25
*/

let person2 = {
    name: "Alice",
    age: 25
};

let person2Complete = person2.name + person2.age;
console.log("Exercício 6:\n", person2Complete);
console.log("\n");

/*
Atividade 7. Defina uma função utilizando function e faça o código abaixo funcionar:
console.log(add(2,3)); // 5
*/

function add(number1, number2){
    return number1 + number2;
}

console.log("Exercício 7:\n", add(2, 3))

/*
Atividade 8. Defina uma função utilizando Arrow Function e faça o códigoabaixo funcionar: 
console.log(multiply(2,3)); // 6
*/

let multiply = (number1, number2) => {
    return number1 * number2;
}

console.log("Exercício 8:\n", multiply(2,3));
console.log("\n");

/*
Atividade 9. Utilize as funções das Atividades 7 e 8 e cria uma nova funçãoque as receba como parâmetro. A função deve mostrar o valor resultante:
console.log(executeFunction(add,2,3)); // 5
// console.log(executeFunction(multiply,2,3)); // 6
*/

function executeFunction(func, number1, number2){
    return func(number1, number2);
}

console.log("Exercício 9:\n", executeFunction(add, 2, 3), "\n", executeFunction(multiply, 2, 3));