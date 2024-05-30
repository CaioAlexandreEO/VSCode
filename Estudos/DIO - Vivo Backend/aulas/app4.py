import sys

opcao = int(input("Digite 1 para sacar; 2 para depositar; 3 para ver o saldo: "))

if opcao == 1:
    def sacar(valor):
        saldo = 500

        if saldo>= valor :
            print("valor sacado!")
            print("retire o seu dinheiro na boca do caixa")


elif opcao == 2:
    def depositar(valor):
        saldo = 500
        saldo+= valor
        print(valor,"depositado com sucesso!")


elif opcao == 3:
    def saldo():
        print(saldo)

else:
    sys.exit("Opção invalida!")

