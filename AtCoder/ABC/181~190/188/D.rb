n,C = gets.split.map(&:to_i)
a,b,c = n.times.map{gets.split.map(&:to_i)}.transpose
e = []
n.times do |i|
  e << [a[i] - 1, c[i]]
  e << [b[i], -c[i]]
end
e.sort!
ans = 0
f = 0
t = 0
e.each do |x, y|
  if x != t
    ans += [C, f].min * (x - t)
    t = x
  end
  f += y
end
puts ans
