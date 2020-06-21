n, k = gets.split.map(&:to_i)
p = gets.split.map(&:to_i).sort

sum = 0
k.times do |i|
  sum += p[i]
end

puts sum