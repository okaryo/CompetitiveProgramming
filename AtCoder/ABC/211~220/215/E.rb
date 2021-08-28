# TLE (ToT)
N = gets.to_i
S = gets.chomp
MOD = 998244353
All = 1<<10
dp = Array.new(1010) {Array.new(All) {Array.new(11, 0)}}
dp[0][0][10] = 1
N.times do |i|
  All.times do |bits|
    11.times do |last|
      next if dp[i][bits][last] == 0
      dp[i+1][bits][last] += dp[i][bits][last]
      dp[i+1][bits][last] %= MOD

      next_c = S[i].ord - 'A'.ord
      next if bits[next_c] != 0 && last != next_c
      dp[i+1][bits|(1<<next_c)][next_c] += dp[i][bits][last]
      dp[i+1][bits|(1<<next_c)][next_c] %= MOD
    end
  end
end
ans = 0
All.times do |bits|
  10.times do |last|
    ans += dp[N][bits][last]
    ans %= MOD
  end
end
puts(ans)
