N = gets.to_i
A = gets.split.map(&:to_i)
MOD = 998244353
dp = Array.new(N+10) {Array.new(10, 0)}
