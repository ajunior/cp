population = int(input())
stolen_melons = rescued_goblins = 0

while True:
    army, melons, goblins = map(int, input().split())
    if (army == melons == goblins == 0):
        break
        
    if (army > population):
        stolen_melons += melons
        rescued_goblins += goblins
    
    print(f'Meloes roubados: {stolen_melons}\nGoblins resgatados: {rescued_goblins}\n---')

