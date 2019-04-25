#未完成

H, W = map(int, input().split())
A = [input() for i in range(H)]

i = 0
while i < H:
    B = A[i]
    x = B.count('.')
    if x == W:
        del A[i]
    i += 1

print(A)