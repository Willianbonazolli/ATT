/*
Exercícios com objetos

const pessoas = [ { nome: "Luiz", idade: 25 }, { nome: "Ana", idade: 19 } ];

Encontre a pessoa chamada "Ana".

Filtre apenas maiores de idade.

Ordene as pessoas por idade.

Remova a pessoa chamada "Luiz".

Atualize a idade da Ana para 20.
*/



const pessoas = [
    { nome: "Luiz", idade: 25 },
    { nome: "Ana", idade: 19 }
];

let ana = pessoas.find(pessoa => pessoa.nome === "Ana");

console.log(ana);

let maiores = pessoas.filter(pessoa => pessoa.idade >= 18);

console.log(maiores);

pessoas.sort((a, b) => a.idade - b.idade);

console.log(pessoas);

let semLuiz = pessoas.filter(pessoa => pessoa.nome !== "Luiz");

console.log(semLuiz);

pessoas.forEach(pessoa => {
    if (pessoa.nome === "Ana") {
        pessoa.idade = 20;
    }
});

console.log(pessoas);