print("Calcule o valor do carro alugado por viagem")

dias = int(input("Quantos dias alugados? "))
km = int(input("Quantos Km rodados?? "))

valor = (dias * 60) + (km * 0.15)

print("O total a pagar é de R${:.2f}".format(valor))