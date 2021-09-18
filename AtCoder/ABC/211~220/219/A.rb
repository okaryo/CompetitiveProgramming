X = gets.to_i
if X >= 90
  puts 'expert'
elsif X >= 70
  puts 90 - X
elsif X >= 40
  puts 70 - X
else
  puts 40 - X
end
