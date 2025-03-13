class User {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    get printName() {
        return `User's name is ${this.name}`;
    }

    get printAge() {
        return `User's age is ${this.age}`;
    }
    
}

module.exports = User;