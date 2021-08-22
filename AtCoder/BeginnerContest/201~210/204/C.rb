N,M = gets.split.map(&:to_i)
graph = Array.new(N) {[]}
M.times do
  a,b = gets.split.map(&:to_i)
  graph[a-1] << b-1
end
ans = 0
N.times do |start|
  check = Array.new(N, false)
  queue = [start]
  while !queue.empty? do
    now = queue.shift
    next if check[now]
    check[now] = true
    ans += 1
    graph[now].each do |i|
      queue.push(i)
    end
  end
end
puts(ans)
