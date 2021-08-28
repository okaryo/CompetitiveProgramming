a = int(input())

if a % 2 == 0:
    b = a / 2
    c = b * b
else:
    b = a // 2
    c = b * (b + 1)

print(int(c))