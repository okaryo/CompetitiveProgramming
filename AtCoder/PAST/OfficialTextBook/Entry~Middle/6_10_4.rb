n,m = gets.split.map(&:to_i)
INF = 10**18
dist = Array.new(n) {Array.new(n, INF)}
m.times do
  u,v,c = gets.split.map(&:to_i)
  dist[u-1][v-1] = c
end
n.times do |k|
  n.times do |i|
    n.times do |j|
      dist[i][j] = [dist[i][j], dist[i][k] + dist[k][j]].min
    end
  end
end
ans = 0
n.times do |i|
  n.times do |j|
    next if i == j
    ans += dist[i][j]
  end
end
puts(ans)
