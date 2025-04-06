const delay = () => {
    return new Promise(resolve => setTimeout(resolve, 1000));
}


async function porUmSegundo(){
    for(i=1; i <= 3; i++){
        await delay();
        console.log(`${i}s`);
    }
}

porUmSegundo();