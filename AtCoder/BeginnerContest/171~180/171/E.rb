_n = gets.to_i
a = gets.split.map(&:to_i)

sum = 0
a.each do |i|
  sum ^= i
end

puts a.map {|x| sum ^ x}.join(' ')
