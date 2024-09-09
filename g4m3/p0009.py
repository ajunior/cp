melons = 0; position = 0

while True:
    try:
        picture: str = input()
    except EOFError:
        break

    # não há locais para onde o goblin olhou... ele deve ter desmaiado!
    if len(set(picture)) == 1 and set(picture).pop() == 'O':
        print(f'Vitória com {melons} melões!')
        break

    # não se deve fazer nada, pois o goblin está olhando para o seu esconderijo
    if picture[position] == 'X':
        print('Silêncio...')
        continue

    # não há nenhum movimento possivel, pois não há vizinho à esquerda
    # e o goblin está olhando para o esconderijo. Neste caso, melão nele!
    if picture[position] == 'O' and \
       ((position - 1 < 0 or picture[position - 1] == 'X') and \
       (position + 1 == len(picture) or picture[position + 1] == 'X')):
        print('Tiro de Melão!!!')
        melons += 1
        continue

    # há exatamente uma opção de mudança de esconderijo e o goblin não está olhando
    # para onde você está... então vamos para o esconderijo X
    if picture[position] == 'O' and \
       (position - 1 < 0 or picture[position - 1] == 'X') and \
       picture[position + 1] == 'O':
        position += 1
        print(f'Correndo pro esconderijo {position}!')
        continue

    if picture[position] == 'O' and picture[position - 1] == 'O' and picture[position + 1] == 'O':
        print('Tiro de Melão!!!')
        melons += 1
        continue

    # há exatamente uma opção de mudança de esconderijo e o goblin não está olhando
    # para onde você está... então vamos para o esconderijo X
    if picture[position] == 'O' and \
       (position + 1 == len(picture) or picture[position + 1] == 'X') and \
       picture[position - 1] == 'O':
        position -= 1
        print(f'Correndo pro esconderijo {position}!')
        continue
