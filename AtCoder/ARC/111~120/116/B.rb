N = gets.to_i
A = gets.split.map(&:to_i).sort
MOD = 998244353
ans = 0
x = 0
y = 0
A.each do |ai|
  x = (x*2 + y) % MOD
  y = ai
  ans += (x + y) * y % MOD
end
puts(ans % MOD)
