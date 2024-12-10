print("digite um numero: ")
num = float(input())

if num % 2 != 0 and num % num ** 2 != 0:
    print("o numero é primo")
elif num == 2:
    print("o numero é primo")
else:
    print("o numero nao é primo")