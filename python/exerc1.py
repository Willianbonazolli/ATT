n1 = int(input("Digite um numero: "))
n2 = int(input("Digite outro numero: "))

s = n1 + n2
n = n1 - n2
d = n1 / n2
m = n1 * n2
di = n1 // n2
e = n1 ** n2

print("A soma dos numeros é {}, a subtração é {}, a divisão é {:.2f},".format(s, n, d), end= " >>> ")
print("A multiplicação é {}, a divisão inteira é {}, a potência é {},".format(m, di, e))