def conversor_celcfh (temperatura):
    return float((temperatura * 1.8) + 32)

def conversor_fhcelc (temperatura):
    return float((temperatura - 32) / 1.8)

def conversor_celckel (temperatura):
    return temperatura + 273.15

def conversor_fhkel (temperatura):
     temporaria = float((temperatura - 32) / 1.8)
     return temporaria + 273.15

def conversor_kelcelc (temperatura):
    return temperatura - 273.15

def conversor_kelfh (temperatura):
    temporaria = float(temperatura - 273.15)
    temp = float((temporaria * 1.8) + 32)
    return temp


opcao = input("escolha para qual deseja transformar: \n[k]elvin \n[f]erenheit \n[c]elcius \n")

if opcao == 'k' or opcao == 'K':
    escolha = input("digitar a temperatura em \n[c]elcius \n[f]erenheit \n")

    if escolha == 'c' or escolha =='C':
        temp = float(input("digite a temperatura em celcius: "))
        result = conversor_celckel(temp)
        print(f"A temperatura em Kelvin é {result:.2f}")
    elif escolha == 'f' or escolha == 'F':
        temp = float(input("digite a temperatura em farenheit: "))
        result = conversor_fhkel(temp)
        print(f"A temperatura em Kelvin é {result:.2f}")
    else:
        print("valor invalido")
        input()
elif opcao == 'f' or opcao =='F':
    escolha = input("digitar a temperatura em \n[c]elcius \n[k]elvin \n")

    if escolha == 'c' or escolha =='C':
        temp = float(input("digite a temperatura em celcius: "))
        result = conversor_celcfh(temp)
        print(f"a temperatura em ferenheit é {result:.2f}")
    elif escolha == 'k' or escolha == 'K':
        temp = float(input("digite a temperatura em kelvin: "))
        result = conversor_kelfh(temp)
        print(f"A temperatura em farenheit é {result:.2f}")
    else:
        print("valor inválido")
elif opcao == 'c' or opcao =='C':
    escolha = input("digitar a temperatura em \n[f]erenheit \n[k]elvin \n")

    if escolha == 'f' or escolha =='F':
        temp = float(input("digite a temperatura em ferenheit: "))
        result = conversor_fhcelc(temp)
        print(f"a temperatura em celcius é {result:.2f}")
    elif escolha == 'k' or escolha == 'K':
        temp = float(input("digite a temperatura em kelvin: "))
        result = conversor_kelcelc(temp)
        print(f"A temperatura em celcius é {result:.2f}")
    else:
        print("valor inválido")
else:
    print("Valor inválido")