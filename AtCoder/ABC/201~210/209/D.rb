N,Q = gets.split.map(&:to_i)
graph = Array.new(N) {[]}
(N-1).times do
  a,b = gets.split.map(&:to_i)
  graph[a-1] << b-1
  graph[b-1] << a-1
end
dist = Array.new(N, -1)
dist[0] = 0
q = [0]
while !q.empty? do
  s = q.shift
  graph[s].each do |n|
    next if dist[n] != -1
    dist[n] = dist[s] + 1
    q.push(n)
  end
end
Q.times do
  c,d = gets.split.map(&:to_i)
  if dist[c-1] % 2 == dist[d-1] % 2
    puts('Town')
  else
    puts('Road')
  end
end
