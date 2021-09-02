N,M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)
puts(((A-B) + (B-A)).sort.join(' '))
