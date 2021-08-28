a,b = gets.split
sum = lambda { |x_s| x_s.each_char.map(&:to_i).sum }
puts [sum.call(a), sum.call(b)].max
