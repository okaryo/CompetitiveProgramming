a,b = gets.split.map(&:to_i)
c = a + b
if c >= 15 && b >= 8
  puts 1
elsif c >= 10 && b >= 3
  puts 2
elsif c >= 3
  puts 3
else
  puts 4
end
