function myEvery(array, func) {
    for (let i = 0; i < array.length; i++) {
        if (!func(array[i], i, array)) {
            return false;
        }
    }
    return true;
}

const numbers = [2, 4, 6, 8];

console.log(myEvery(numbers, num => num % 2 === 0));
console.log(myEvery(numbers, num => num > 5));       
