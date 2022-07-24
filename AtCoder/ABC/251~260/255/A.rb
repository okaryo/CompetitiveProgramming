R,C = gets.split.map(&:to_i)
A = 2.times.map {gets.split.map(&:to_i)}
puts A[R-1][C-1]
