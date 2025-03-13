let User = require("./user"); 
let express = require("express");

const app = express();
const port = 3000;
const userRouter = express.Router();

let user1 = new User("Michelly", 21);

userRouter.get('/user_data', (req, res) => {
    res.send(`${user1.printName} and ${user1.printAge}`);
});

app.use(userRouter);

app.get('/', (req, res) => {
    res.send('Olá Mundo!');
});

app.listen(port, () => {
    console.log(`App de exemplo está rodando na porta ${port}`);
});
