print("Escolha uma operação para realizar: ")
escolha = input(" [x]Multiplicação \n [/]Divisão \n [+]Soma \n [-]Subtração:\n")

# Garantindo que a escolha seja comparada corretamente
if escolha == 'x' or escolha == 'X':
    print("Escolha dois números ")
    n1 = float(input("Primeiro número: "))  # Convertendo para float
    n2 = float(input("Segundo número: "))  # Convertendo para float
    mult = n1 * n2
    print(f"A multiplicação desses dois números é: {mult}")
elif escolha == '/':
    print("Escolha dois números ")
    n1 = float(input("Primeiro número: "))  # Convertendo para float
    n2 = float(input("Segundo número: "))  # Convertendo para float
    if n2 == 0:  # Evitar divisão por zero
        print("Erro: Divisão por zero não é permitida.")
    else:
        divis = n1 / n2
        print(f"A divisão dos dois números é: {divis}")
elif escolha == '+':
    print("Escolha dois números ")
    n1 = float(input("Primeiro número: "))  # Convertendo para float
    n2 = float(input("Segundo número: "))  # Convertendo para float
    soma = n1 + n2
    print(f"A soma dos dois números é: {soma}")
elif escolha == '-':
    print("Escolha dois números ")
    n1 = float(input("Primeiro número: "))  # Convertendo para float
    n2 = float(input("Segundo número: "))  # Convertendo para float
    sub = n1 - n2
    print(f"A subtração dos dois números é: {sub}")
else:
    print("Opção inválida.")
