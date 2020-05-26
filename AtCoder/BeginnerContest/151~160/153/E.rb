h, n = gets.split.map(&:to_i)
a, b = n.times.map{gets.split.map(&:to_i)}.transpose

INF = 10**8
max_a = a.max
dp = Array.new(h + max_a + 1, INF)
dp[0] = 0

0.upto(h) do |i|
  n.times do |j|
    if dp[i + a[j]] > dp[i] + b[j]
      dp[i + a[j]] = dp[i] + b[j]
    end
  end
end

puts dp[h..-1].min
