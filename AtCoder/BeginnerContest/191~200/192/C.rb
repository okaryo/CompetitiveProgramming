n,k = gets.split.map(&:to_i)
g1 = lambda do |ni|
  ni.to_s.chars.map(&:to_i).sort.reverse.join.to_i
end
g2 = lambda do |ni|
  ni.to_s.chars.map(&:to_i).sort.join.to_i
end
f = lambda do |ni|
  g1.call(ni) - g2.call(ni)
end
ans = n
k.times do |i|
  ans = f.call(ans)
end
puts(ans)
