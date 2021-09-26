N = gets.to_i
graph = Array.new(N){[]}
(N-1).times do
  u,v = gets.split.map(&:to_i)
  graph[u-1] << v-1
  graph[v-1] << u-1
end

