n = gets.to_i
a = gets.split.map(&:to_i)
b = gets.split.map(&:to_i)
sum = 0
n.times { |i| sum += a[i] * b[i] }
puts sum == 0 ? 'Yes' : 'No'
