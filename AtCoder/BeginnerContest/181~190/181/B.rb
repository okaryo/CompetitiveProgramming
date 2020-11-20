n = gets.to_i
sum = 0
n.times do
  a,b = gets.split.map(&:to_i)
  sum += (a + b) * (b - a + 1) / 2
end

puts sum
