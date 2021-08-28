x, y = gets.split.map(&:to_i)

a = (4 * x - y)
b = (y - x * 2)

if a % 2 == 0 && b % 2 == 0 && a >= 0 && b >= 0
  puts 'Yes'
else
  puts 'No'
end