N = gets.to_i
A = gets.split.map(&:to_i)
MOD = 1e9+7
a = [0] + A
a.sort!
ans = 1
N.times do |i|
  ans *= (a[i+1] - a[i] + 1)
  ans %= MOD
end
puts(ans)
