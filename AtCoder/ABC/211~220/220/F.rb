N = gets.to_i
graph = Array.new(N){[]}
(N-1).times do
  u,v = gets.split.map(&:to_i)
  graph[u-1] << v-1
  graph[v-1] << u-1
end
sub = Array.new(N, 1)
ans = Array.new(N, 0)
q = [[0, -1, 0]]
check = Array.new(N, false)
while !q.empty? do
  now,p,d = q.shift
  check[now] = true
  ans[0] += d
  graph[now].each do |x|
    next if x == p || check[x]
    q.push([x, now, d+1])
  end
end
dfs = lambda do |i, p|
  graph[i].each do |x|
    next if x == p
    dfs.call(x, i)
    sub[i] += sub[x]
  end
end
dfs.call(0, -1)
q = [[0, -1]]
check = Array.new(N, false)
while !q.empty? do
  now,p = q.shift
  check[now] = true
  graph[now].each do |x|
    next if x == p || check[x]
    ans[x] = ans[now] - 2*sub[x] + N
    q.push([x, now])
  end
end
puts(ans)
