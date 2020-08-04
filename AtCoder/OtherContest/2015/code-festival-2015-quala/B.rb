n = gets.to_i
a = gets.split.map(&:to_i)

sum = 0
a.each do |i|
  t = sum + i + sum
  sum = t
end

puts sum
