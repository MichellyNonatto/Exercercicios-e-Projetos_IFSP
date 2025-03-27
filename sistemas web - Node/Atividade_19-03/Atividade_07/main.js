const Logger = require("./logger");
const logger = new Logger();

logger.info();
logger.error();
logger.warning();

/*
NO TERMINAL

NODE_DEBUG=INFO,ERROR,WARNING node Atividade_07/main.js
*/