N = int(input())
A = ""

if N % 2 == 0:
    A = "0" + A
else:
    A = "1" + A
    N -= 1

n = -2
while N != 0:
    if N == n:
        A = "1" + A
        break
    if N % ( n * 2 ) == 0:
        A = "0" + A
    else:
        A = "1" + A
        N -= n
    n *= -2

print(A)