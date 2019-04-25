A, B, C = map(int,input().split())
X = [A, B , C]
Y = max(X)
X.remove(Y)
Z = Y * 10 + X[0] + X[1]
print(Z)