a, b, c = gets.split.map(&:to_i)

x = c - a - b

if x > 0 && 4 * a * b < x * x
  puts 'Yes'
else
  puts 'No'
end
