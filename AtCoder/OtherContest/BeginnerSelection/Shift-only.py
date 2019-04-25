N = int(input())
A = (map(int, input().split()))
B = []

for i in A:
    count = 0
    while True:
        if i % 2 == 0:
            count += 1
            i = i / 2    
        else:
            B.append(count)
            break

print(min(B))