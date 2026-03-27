valor = input("Digite algo: ")

print("Tipo primitivo:", type(valor))


print("É numérico = {}".format(valor.isnumeric()))
print("É alfabético = {}".format(valor.isalpha()))
print("É alfanumérico = {}".format(valor.isalnum()))
print("Está em maiúsculas = {}".format(valor.isupper()))
print("Está em minúsculas = {}".format(valor.islower()))
print("Está capitalizada = {}".format(valor.istitle()))
print("Contém apenas espaços = {}".format(valor.isspace()))
print("É um número decimal = {}".format(valor.isdecimal()))
print("É um identificador válido = {}".format(valor.isidentifier()))