a, b, c, x, y = gets.split.map(&:to_i)

a_1 = a * x + b * y
a_2 = [x, y].max * 2 * c
a_3 = x * 2 * c + [0, y - x].max * b
a_4 = y * 2 * c + [0, x - y].max * a

puts [a_1, a_2, a_3, a_4].min
