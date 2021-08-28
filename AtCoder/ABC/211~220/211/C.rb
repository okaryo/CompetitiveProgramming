S = gets.chomp
C = 'chokudai'
MOD = 10**9 + 7
n = S.size
dp = Array.new(n+1) {Array.new(9, 0)}
(n+1).times do |i|
  9.times do |j|
    if j == 0
      dp[i][j] = 1
    elsif i == 0
      dp[i][j] = 0
    elsif S[i-1] == C[j-1]
      dp[i][j] = dp[i-1][j] + dp[i-1][j-1]
    else
      dp[i][j] = dp[i-1][j]
    end
    dp[i][j] %= MOD
  end
end
puts(dp[n][8])
