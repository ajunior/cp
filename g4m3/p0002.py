producers, expected = map(int, input().split())
collected = 0

for i in range(producers):
    collected += int(input())
    
if (collected >= expected):
    print("NADA PREOCUPANTE")
elif (collected >= expected - 5):
    print("POUCO PREOCUPANTE")
else:
    print("MUITO PREOCUPANTE")

# Complexity - Time: O(n); Space: O(1)

