a,b = gets.split.map(&:to_i)
c,d = gets.split.map(&:to_i)
puts [a-c, a-d, b-c, b-d].max
