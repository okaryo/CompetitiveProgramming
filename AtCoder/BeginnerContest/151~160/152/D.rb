n = gets.to_i

dp = Array.new(10){Array.new(10, 0)}
1.upto(n) do |x|
  dp[x.to_s[0].to_i][x.to_s[-1].to_i] += 1
end

ans = 0

1.upto(9) do |i|
  1.upto(9) do |j|
    ans += dp[i][j] * dp[j][i]
  end
end

puts ans
