/*
Exercícios com números

Some todos os números de um array.

Mostre o maior número.

Mostre o menor número.

Crie um novo array com os números dobrados.

Filtre apenas números pares.

Remova números repetidos.
*/

let numeros = [10, 5, 8, 20, 5, 8, 30];

let soma = 0;

for (let i = 0; i < numeros.length; i++) {
    soma += numeros[i];
}

console.log(soma);

console.log(Math.max(...numeros));

console.log(Math.min(...numeros));

let dobrados = numeros.map(num => num * 2);

console.log(dobrados);

let pares = numeros.filter(num => num % 2 === 0);

console.log(pares);

let semRepetidos = [...new Set(numeros)];

console.log(semRepetidos);