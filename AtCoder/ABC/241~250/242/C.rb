N = gets.to_i
mod = 998244353

dp = Array.new(N+10) {Array.new(11, 0)}
1.upto(9) do |i|
  dp[1][i] = 1
end

2.upto(N) do |i|
  1.upto(9) do |j|
    dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]
    dp[i][j] %= mod
  end
end

puts dp[N].sum % mod
