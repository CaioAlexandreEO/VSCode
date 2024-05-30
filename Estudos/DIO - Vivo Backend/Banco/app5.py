import sys
import time


def operação(saldo = 0):
    while saldo <= 0:
        saldo = float(input("===========================================\n| Seu saldo atual é de R$ 0,00            |\n| Deposite um valor                       |\n===========================================\n ---> R$"))
    

    else:
        opcao = -1
        
        while opcao != 4:
            opcao = int(input("===========================================\n| PELADOBANK                              |\n| Digite o que deseja realizar:           |\n| [1] Saldo                               |\n| [2] Saque                               |\n| [3] Depósito                            |\n| [4] Sair                                |\n===========================================\n ---> "))

    
            if opcao == 1:
                (print(f"===========================================\n| Seu saldo é de : R${saldo:.2f}                 |\n==========================================="))

                time.sleep(2)
    
            elif opcao == 2:
                saque = float(input("===========================================\n| Digite quanto deseja sacar              |\n===========================================\n---> R$"))
                if saldo<saque:
                    print("===========================================\n| Sem saldo suficiente!                   |\n===========================================")
            
                    time.sleep(2)
        
                elif saldo>=saque:
                    print("===========================================\n| Efetuando saque!                        |\n===========================================")
                    time.sleep(1.5)
                    print("===========================================\nRetire as cedulas abaixo na boca do caixa!")
                    saldo -= saque
            
                time.sleep(2)
    
            elif opcao == 3:
                deposito = float(input("Deposite o valor de: R$"))
                saldo += deposito
                print(f"Você depositou R${deposito:.2f}")
                time.sleep(1.5)
                print("Concluindo depósito...")
                time.sleep(3)
                print("Valor depositado com sucesso!")
        
                time.sleep(2)
    
        else:
            saldo = 0
            sys.exit("============================\n| Obrigado e volte sempre! |\n============================")
            
            
operação()