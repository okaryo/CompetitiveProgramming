n, q = gets.split.map(&:to_i)
a, b = n.times.map{gets.split.map(&:to_i)}.transpose
c, d = q.times.map{gets.split.map(&:to_i)}.transpose

puts a