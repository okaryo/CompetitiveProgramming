N,K,S = gets.split.map(&:to_i)
ans = []
max = 10**9
if S == max
  ans += [max] * K
  ans += [1] * (N-K)
else
  ans += [S] * K
  ans += [S + 1] * (N-K)
end
puts(ans.join(" "))
