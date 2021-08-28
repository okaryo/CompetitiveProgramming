N = int(input())
T, A = map(int, input().split())
H = list(map(int, input().split()))

i = 0
minGap = 100000
while i < N:
    AT = T - H[i] * 0.006
    gap = abs(A - AT)
    if minGap > gap:
        minGap = gap
        ans = i + 1
    i += 1

print(ans)
