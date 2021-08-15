import bisect
n,m = list(map(int, input().split()))
a = list(map(int, input().split()))
b = [0]*n
for ai in a:
  k = bisect.bisect_right(b, -ai)
  if k == n:
    print(-1)
  else:
    print(k+1)
    b[k] = -ai
