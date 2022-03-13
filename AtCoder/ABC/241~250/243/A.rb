V,A,B,C = gets.split.map(&:to_i)
v = V % (A+B+C)
if v - A < 0
  puts 'F'
elsif v - A - B < 0
  puts 'M'
else
  puts 'T'
end
