n,m,q = gets.split.map(&:to_i)
graph = Array.new(n) {[]}
m.times do |i|
  u,v = gets.split.map(&:to_i)
  graph[u-1] << v-1
  graph[v-1] << u-1
end
color = gets.split.map(&:to_i)
q.times do
  query = gets.split.map(&:to_i)
  if (query.first == 1)
    x = query[1] - 1
    puts(color[x])
    graph[x].each do |node|
      color[node] = color[x]
    end
  else
    x = query[1] - 1
    y = query[2]
    puts(color[x])
    color[x] = y
  end
end
