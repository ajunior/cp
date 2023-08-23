sensors, threshold = map(int, input().split())
values = list(map(int, input().split()))

for i in values:
        print(0) if (i > threshold) else print(1)
        
# Complexity - Time: O(n); Space: O(n)

