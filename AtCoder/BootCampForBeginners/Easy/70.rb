x = gets.to_i

t = x % 100
sum = 0
n = 5
(1..5).reverse_each do |i|
  sum += t / i
  t %= i
end

puts sum * 100 + x % 100 <= x ? 1 : 0
