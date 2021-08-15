n = gets.to_i
root = -1
edges = Array.new(n) {[]}
n.times do |i|
  p = gets.to_i
  if p == -1
    root = i
  else
    edges[p-1] << i
  end
end
queries = Array.new(n){[]}
q = gets.to_i
q.times do |i|
  a,b = gets.split.map(&:to_i)
  queries[a-1] << [i, b-1]
end
ans = Array.new(q, false)
boss = Array.new(n, false)
dfs = lambda do |i|
  queries[i].each do |qi,b|
    ans[qi] = boss[b]
  end
  boss[i] = true
  edges[i].each do |j|
    dfs.call(j)
  end
  boss[i] = false
end
dfs.call(root)
q.times do |qi|
  if ans[qi]
    puts('Yes')
  else
    puts('No')
  end
end
