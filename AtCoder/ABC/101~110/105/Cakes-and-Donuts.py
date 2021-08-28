N = int(input())

X = N // 7
i = 0
while i <= X:
    Y = N - 7 * i
    Z = Y % 4
    if Z == 0:
        print("Yes")
        break
    i += 1
else:
    print("No")
