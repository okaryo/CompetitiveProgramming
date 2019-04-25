A = int(input())
B = int(input())
C = int(input())
X = int(input())

count = 0

for m in range(A+1):
    s = X - 500*m
    for n in range(B+1):
        t = s - 100*n
        if t >= 0 and t <= 50*C:
            count += 1

print(count)