/*
Crie um array chamado nomes com 5 nomes.

Mostre o primeiro item do array.

Mostre o último item do array.

Adicione "Carlos" no final.

Adicione "Ana" no início.

Remova o último item.

Remova o primeiro item.

Remova o item do índice 2.

Adicione "Pedro" na posição 1.

Troque o item do índice 0 por "Luiz".

Mostre todos os itens usando for.

Mostre quantos itens existem no array.

Verifique se existe "Maria".

Mostre o índice de "Pedro".

Ordene o array.

Inverta o array.

Transforme o array em string usando join.

*/

let nomes = ["João", "Maria", "Lucas", "Fernanda", "Paulo"];

console.log(nomes[0]);

console.log(nomes[nomes.length - 1]);

nomes.push("Carlos");

nomes.unshift("Ana");

nomes.pop();

nomes.shift();

nomes.splice(2, 1);

nomes.splice(1, 0, "Pedro");

nomes[0] = "Luiz";

for (let i = 0; i < nomes.length; i++) {
    console.log(nomes[i]);
}

console.log(nomes.length);

console.log(nomes.includes("Maria"));

console.log(nomes.indexOf("Pedro"));

nomes.sort();

nomes.reverse();

console.log(nomes.join(", "));
