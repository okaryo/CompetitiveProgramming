A,B = gets.split.map(&:to_i)
if (B-A) == 1 || (B-A) == 9
  puts 'Yes'
else
  puts 'No'
end
