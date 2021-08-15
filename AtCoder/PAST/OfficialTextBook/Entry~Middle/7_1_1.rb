n,m = gets.split.map(&:to_i)
edges = Array.new(n) {[]}
m.times do
  u,v = gets.split.map(&:to_i)
  edges[u-1] << v-1
  edges[v-1] << u-1
end
s = gets.to_i - 1
k = gets.to_i
t = gets.split.map{|x| x.to_i - 1}
t << s
dist = []
INF = 10**6
t.each do |t1|
  d = Array.new(n, INF)
  queue = []
  queue.push(t1)
  d[t1] = 0
  while queue.size > 0 do
    i = queue.shift
    edges[i].each do |j|
      if d[j] == INF
        d[j] = d[i] + 1
        queue.push(j)
      end
    end
  end
  res = []
  t.each do |t2|
    res.push(d[t2])
  end
  dist << res
end

all = 1<<k
cost = Array.new(all){Array.new(k, INF)}
k.times do |i|
  cost[1<<i][i] = dist[k][i]
end
all.times do |bits|
  k.times do |i|
    k.times do |j|
      next if bits[j] != 0 || i == j
      cost[bits|1<<j][j] = [cost[bits|1<<j][j], cost[bits][i] + dist[i][j]].min
    end
  end
end
puts(cost[all-1].min)
