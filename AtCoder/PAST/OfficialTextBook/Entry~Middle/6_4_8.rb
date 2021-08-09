n,m = gets.split.map(&:to_i)
edges = Array.new(n) {[]}
indeg = Array.new(n, 0)
m.times do
  x,y = gets.split.map(&:to_i)
  edges[x-1] << y-1
  indeg[y-1] += 1
end
length = Array.new(n, 0)
done = Array.new(n, false)
rec = lambda do |i|
  return length[i] if done[i]
  length[i] = 0
  edges[i].each do |e|
    length[i] = [length[i], rec.call(e) + 1].max
  end
  done[i] = true
  return length[i]
end
n.times do |i|
  if indeg[i] == 0
    rec.call(i)
  end
end
puts(length.max)
