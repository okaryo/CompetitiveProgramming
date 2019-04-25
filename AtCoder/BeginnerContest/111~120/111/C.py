n = int(input())
v = list(map(int, input().split()))
A = []
B = []
A_count = []
B_count = []

for i in range(n - 1):
    if i % 2 == 0:
        A.append(v[i])
    else:
        B.append(v[i])

for i in range(int(n / 2)):
    A_count.append(A.count(A[i]))
    B_count.append(B.count(B[i]))
    maxA = max(A_count)
    maxB = max(B_count)

a = len(A) - maxA
b = len(B) - maxB
answer = a + b
print(answer)

#not completed