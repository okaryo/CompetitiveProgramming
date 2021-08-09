n = gets.to_i
graph = Array.new(n) {[]}
1.upto(n-1) do |i|
  b = gets.to_i
  graph[b-1] << i
end
dfs = lambda do |i|
  if graph[i].empty?
    return 1
  end
  values = []
  graph[i].each {|j| values << dfs.call(j) }
  return values.max + values.min + 1
end
puts(dfs.call(0))
