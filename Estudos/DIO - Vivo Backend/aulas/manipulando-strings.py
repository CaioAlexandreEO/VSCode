curso1 = "pYtHon"



#Todos os itens da string em MAIUSCULO
print(curso1.upper())
# "PYTHON"

#Todos os itens da string em MINUSCULO
print(curso1.lower())
# "python"

#Toda a string com a primeira letra maiuscula e o restante em minusculo em todas as palavras
print(curso1.title())
# "Python"

#_______________________________________________________

curso2= "    Python "



#Remove todos os espaços antes e depois da string
print(curso2.strip())
# "Python"

#Remove todos os espaços a esquerda da string
print(curso2.lstrip())
# "Python "

#Remove todos os espaços a direita da string
print(curso2.rstrip())
# "    Python"

#_______________________________________________________

curso3="Python"


#Centraliza a string em um numero de caracteres definidos em primeiro parametro e no segundo parametro define o item para preencher (Com preenchimento)
print(curso3.center(10, "#"))
# "##Python##"

#Centraliza a string em um numero de caracteres definidos em primeiro e o preenchimento é definido em seguida(Sem preenchimento)
print(curso3.center(10))
# "  Python  "

#Adiciona o item definido em entre cada item da string selecionada
print(".".join(curso3))
# "P.y.t.h.o.n"

#________________________________________________________

# EXEMPLOS

nome="CaIo"


print(nome.upper())
print(nome.lower())
print(nome.title())

texto= " Olá Caio     "

print(texto + ".")
print(texto.strip() + ".")
print(texto.rstrip() + ".")
print(texto.lstrip() + ".")

menu="Python"

print("####" + menu + "####")
print(menu.center(14))
print(menu.center(14,"#"))
print("-".join(menu))
print("P-y-t-h-o-n")

