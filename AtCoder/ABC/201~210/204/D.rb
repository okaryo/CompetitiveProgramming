N = gets.to_i
T = gets.split.map(&:to_i)
sum = T.sum
dp = Array.new(N+1) {Array.new(sum+10, false)}
dp[0][0] = true
1.upto(N) do |i|
  (sum+10).times do |j|
    dp[i][j] = dp[i-1][j - T[i-1]] || dp[i-1][j]
  end
end
ans = sum
dp[N].each_with_index do |t, i|
  if t
    ans = [ans, [i, sum - i].max].min
  end
end
puts(ans)
