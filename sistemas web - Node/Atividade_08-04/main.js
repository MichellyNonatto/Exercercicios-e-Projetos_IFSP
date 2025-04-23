const url = 'https://jsonplaceholder.typicode.com/posts';
const responseDiv = document.getElementById('result');

function clearResponse(data) {
    if (responseDiv) {
        responseDiv.innerHTML = '';
    }

    const output = document.createElement('pre');
    output.style.backgroundColor = 'black';
    output.style.color = 'white';
    output.style.padding = '1rem';
    output.style.overflowX = 'auto';
    output.textContent = JSON.stringify(data, null, 2);
    responseDiv.appendChild(output);

}

async function fetchGetAll() {

    try {
        const response = await fetch(`${url}`);

        if (!response.ok) {
            throw new Error('Network response was not ok' + response.statusText);
        }

        const data = await response.json();
        clearResponse(data);
    }
    catch (error) {
        console.error('There has been a problem with your fetch operation:', error);
    }
}

async function fetchGetById(id) {
    try {
        if (id.value === "") {
            alert("Por favor infome um ID válido no campo de busca.");
            return;
        }

        const response = await fetch(`${url}/${id.value}`);

        if (!response.ok) {
            throw new Error('Network response was not ok' + response.statusText);
        }

        const data = await response.json();
        clearResponse(data);
    } catch (error) {

        console.error('There has been a problem with your fetch operation:', error);

        const output = document.createElement('p');
        output.style.color = 'red';
        document.body.appendChild("Error: " + error.message);
    }
}

async function fetchPost(id) {
    try {
        if (id.value === "") {
            alert("Por favor infome um ID válido no campo de busca.");
            return;
        }

        const response = await fetch(url, {
            method: 'POST',
            body: JSON.stringify({
                title: "Título do novo post",
                body: "Este é o conteúdo do novo post",
                userId: id.value
            }),
            headers: {"Content-Type": "application/json"}
        });

        if (!response.ok) {
            throw new Error('Network response was not ok' + response.statusText);
        }

        const data = await response.json();
        clearResponse(data);
        
    } catch (error) {
        console.error('There has been a problem with your fetch operation:', error);

        const output = document.createElement('p');
        output.style.color = 'red';
        document.body.appendChild("Error: " + error.message);
    }
}

async function fetchPut() {
    try{
        const response = await fetch(`${url}/1`, {
            method: 'PUT',
            body: JSON.stringify({
                title: "POST atualizado",
                body: "Conteúdo atualizado com sucesso",
                userId: 1
            }),
            headers: {"Content-type": "application/json"}
        });

        if (!response.ok) {
            throw new Error('Network response was not ok' + response.statusText);
        }

        const data = await response.json();
        clearResponse(data);
    } catch (error){
        console.error('There has been a problem with your fetch operation:', error);

        const output = document.createElement('p');
        output.style.color = 'red';
        document.body.appendChild("Error: " + error.message);
    }
}

async function fechDelete(){
    try {
        const response = await fetch(`${url}/1`, {method: 'DELETE'});

        if (!response.ok) {
            throw new Error('Network response was not ok' + response.statusText);
        }

        clearResponse({ message: `Post com ID 1 foi deletado com sucesso.` });

    } catch (error){
        console.error('There has been a problem with your fetch operation:', error);

        const output = document.createElement('p');
        output.style.color = 'red';
        document.body.appendChild("Error: " + error.message);
    }
}