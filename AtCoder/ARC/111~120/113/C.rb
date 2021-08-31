S = gets.chomp
n = S.size
prev = ''
r = 0
ans = 0
1.upto(n-1) do |i|
  if S[i] == S[i-1] && (S[i-1] != S[i-2] || i == 1) && S[i] != prev
    r += 1
    prev = S[i]
  end
  ans += r
  if S[i] == prev
    ans -= 1
  end
end
puts(ans)
