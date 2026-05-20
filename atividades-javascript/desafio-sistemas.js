/*
Desafio

Crie um sistema de tarefas usando array.

Adicionar tarefa

Remover tarefa

Editar tarefa

Buscar tarefa

Listar tarefas

adicionarTarefa("Estudar JavaScript"); removerTarefa(0); listarTarefas();
*/


let tarefas = [];

function adicionarTarefa(tarefa) {
    tarefas.push(tarefa);
    console.log("tarefa adicionada");
}

function removerTarefa(indice) {
    tarefas.splice(indice, 1);
    console.log("tarefa removida");
}

function editarTarefa(indice, novaTarefa) {
    tarefas[indice] = novaTarefa;
    console.log("tarefa editada");
}

function buscarTarefa(nome) {
    let resultado = tarefas.filter(tarefa =>
        tarefa.toLowerCase().includes(nome.toLowerCase())
    );

    console.log(resultado);
}

function listarTarefas() {
    console.log("lista de tarefas:");

    tarefas.forEach((tarefa, indice) => {
        console.log(indice + ": " + tarefa);
    });
}

adicionarTarefa("estudar javaScript");
adicionarTarefa("fazer exercícios");

listarTarefas();

editarTarefa(1, "fazer exercícios de array");

buscarTarefa("javascript");

removerTarefa(0);

listarTarefas();