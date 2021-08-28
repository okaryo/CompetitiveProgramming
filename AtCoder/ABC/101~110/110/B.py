N, M, X, Y = map(int,input().split())
A = list(map(int,input().split()))
B = list(map(int,input().split()))
A.append(X)
B.append(Y)

maxA = max(A)
minB = min(B)

if minB > maxA :
    print("No War")
else:
    print("War")