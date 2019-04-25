A = int(input())
B = int(input())
C = int(input())
S = int(input())

D = A + B + C
if S - D <= 3 and S - D >= 0:
    print("Yes")
else:
    print("No")