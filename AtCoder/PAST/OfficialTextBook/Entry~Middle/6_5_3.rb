n = gets.to_i
a = n.times.map{gets.split.map(&:to_i)}
all = 1<<n
inf = 10**100
cost = Array.new(all) { Array.new(n, inf) }
cost[0][0] = 0
all.times do |comb|
  n.times do |i|
    n.times do |j|
      next if comb[j] != 0 || i == j
      cost[comb|1<<j][j] = [cost[comb|1<<j][j], cost[comb][i] + a[i][j]].min
    end
  end
end
puts(cost[all-1][0])
