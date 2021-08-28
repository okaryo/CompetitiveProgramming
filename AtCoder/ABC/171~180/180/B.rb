n = gets.to_i
x = gets.split.map(&:to_i)
puts x.sum(&:abs)
puts Math.sqrt(x.sum { |y| y.abs * y.abs })
puts x.map(&:abs).max
