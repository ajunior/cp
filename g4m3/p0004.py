sensors = int(input())
traps = 0
last = -1

for i in range(sensors):
    v = int(input())
    if (v == 0 and last == 1): 
        traps += 1
        last = v
    elif (i == sensors -1 and v == 1):
        traps += 1
    else: 
        last = v
    
print(traps)

