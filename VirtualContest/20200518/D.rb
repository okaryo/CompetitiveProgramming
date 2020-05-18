n = gets.to_i
sum = 0
n.downto(1) { |x| sum += 1 if x.to_s.length.odd? }
puts sum