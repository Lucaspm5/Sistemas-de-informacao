from math import pi
#---------------------------
while True:
    forma = str(input('Informe sua forma geometrica ou prescione 0 para sair: Triângulo, quadrado, circulo'))

    if forma.startswith('0'): break

    if forma.lower().startswith('t'):
        try:
            base, altura = map(int, input('Informe a base e a altura respectivamente:').split())
            print('A area: %.2f'%(base * altura/2))
        except ValueError:
            print('Ocorreu erro na entrada da base e altura, informe corretamente a base e a altura')

    elif forma.lower().startswith('q'):
        try:
            lado = int(input('Informe o lado do quadrado:'))
            print('A area: %d'%(lado * lado))
        except ValueError:
            print('Ocorreu erro na entrada do lado, informe corretamente o lado')

    elif forma.lower().startwith('c'):
        try:
            raio = float(input('Informe o raio:'))
            print('A area: %.2f'%(pi * (raio ** 2)))
        except ValueError:
            print('Ocorreu erro na entrada do raio, informe corretamente o raio')




