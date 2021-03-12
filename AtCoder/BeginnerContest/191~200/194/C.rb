n = gets.to_i
a = gets.split.map(&:to_i)
sum = a.inject(0) { |s, v| s + v * v } * n
t = a.sum
puts sum - t * t
