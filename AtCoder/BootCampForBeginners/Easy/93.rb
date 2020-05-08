n = gets.to_i
a = gets.split.map(&:to_i)

sum_x = 0
sum_y = 0
x = a.map { |b| sum_x += b; sum_x }
y = a.reverse.map { |b| sum_y += b; sum_y }.reverse

ans = x.last
x.each_index do |i|
  next if i + 1 == n
  ans = [ans, (x[i] - y[i + 1]).abs].min
end

puts ans
