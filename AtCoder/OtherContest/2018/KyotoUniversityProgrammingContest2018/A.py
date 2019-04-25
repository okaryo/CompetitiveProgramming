N = int(input())
s = list(map(int, input().split()))
a = list(map(int, input().split()))
X = []

i = 0
while i  < N:
    b = s[i] * a[i]
    X.append(b)
    i += 1

maxX = max(X)
print(maxX)