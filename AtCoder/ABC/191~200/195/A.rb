m,h = gets.split.map(&:to_i)
if h % m == 0
  puts 'Yes'
else
  puts 'No'
end
