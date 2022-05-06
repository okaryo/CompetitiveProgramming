A,B = gets.split.map(&:to_f)
ab = Math.sqrt(A*A + B*B)
x = A / ab
y = B / ab
puts [x, y].join(' ')
